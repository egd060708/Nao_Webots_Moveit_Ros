#!/usr/bin/env python 
# -*- coding: utf-8 -*-

import librosa
import matplotlib.pyplot as plt
import librosa.display
import numpy as np
import soundfile
import sounddevice
import time
import roslib
import rospy  
from std_msgs.msg import Float32
from std_msgs.msg import Int16
import math
import os
import sys

class ROSINIT():
    def __init__(self): 
        # 初始化ros节点
        rospy.init_node('beat_check', anonymous=True)  
        rospy.on_shutdown(self.shutdown)   

        # 创建节拍识别发布话题
        self.beat_pub = rospy.Publisher('cmd_beat', Float32, queue_size = 10)
        self.type_pub = rospy.Publisher('cmd_type', Int16, queue_size = 1)

        self.run_path = sys.path[0] # 获取当前脚本运行路径（无需修改）
        self.about_path = '/../music/' # 固定相对路径（无需修改）

        # 更换曲目在此处修改
        self.file_name = 'dontCry.mp3' # 放在music文件夹下的音频文件
        # Scorpions-alwaysSomewhere.mp3
        # dontCry.mp3
        # Scorpions - Follow Your Heart (Version 2017).mp3

        # 获取音乐
        self.file_path = self.run_path + self.about_path + self.file_name # 生成绝对路径
        self.y,self.sr = librosa.load(self.file_path)

        # 读取节拍并转换为时间序列
        self.tempo, self.beats  =  librosa.beat.beat_track(y = self.y, sr = self.sr) # tempo是速度
        self.times  =  librosa.frames_to_time(self.beats, sr = self.sr)
        self.beat_num = len(self.times)
        print(f'tempo = {self.tempo}')
        # print(f'times = {self.times}') # 打印结果
        print(f'num = {self.beat_num}') # 打印节拍点的个数

        # 根据音乐的速度区分音乐类型并发布
        if self.tempo > 130:
            self.type_pub.publish(1)
        elif self.tempo > 80:
            self.type_pub.publish(2)
        else:
            self.type_pub.publish(3)

        self.rate = math.floor(self.tempo/40) # 如果速度太快，进行分频减速
        # 只能进行二分频或者四分频
        if self.rate > 2:
            if self.rate < 4:
                self.rate = 2
            else:
                self.rate = 4
        # 进行分频操作
        self.ftimes = []
        if (self.rate>=2):
            self.pcount = 0
            while self.pcount < self.beat_num - self.rate:
                self.pcount1 = 0
                myall = 0
                while self.pcount1<self.rate:
                    myall +=  self.times[self.pcount1 + self.pcount]
                    self.pcount1 += 1
                myall = myall/self.rate
                self.ftimes.append((myall-0.05)*0.965) # 考虑整体系统响应延迟对时序序列进行手动拟合
                self.pcount +=self.rate
            self.fbeat_num = len(self.ftimes)
        else :
            self.ftimes = self.times
            self.fbeat_num = self.beat_num
        
        print(f'fnum = {self.fbeat_num}')
        print(f'rate = {self.rate}')


        # 创建定时器并按照时间序列进行话题发布
        
        self.count = 0
        self.timer = rospy.Timer(rospy.Duration(0.032),self.timerCallback,False,False)

    def shutdown(self):  
        rospy.loginfo("Stopping the beat check...")  
        rospy.sleep(5)  
    
    def timerCallback(self,event):
        current_time = event.current_expected.to_sec()      # 获取期望回调时间
        ptime = Float32()                                   # 实例化这个类型
        if self.count < self.fbeat_num:
            if self.count == 0:                             # 第一次回调先启动音乐播放，并且发布第一个时间序列
                sounddevice.play(self.y,self.sr)            # 音乐开始播放
                self.start_time = rospy.Time.now().to_sec()
                ptime.data = self.ftimes[self.count] - 0    # 发布第一个时间间隔
                self.count += 1
                self.beat_pub.publish(ptime)
                rospy.loginfo("Published time is %f",ptime.data)
            if (current_time-self.start_time) >= self.ftimes[self.count]:   # 当前时间超过下一个节拍点
                ptime.data = 1.0*(self.ftimes[self.count] - self.ftimes[self.count-1])  # 发布下一个节拍的时间间隔
                self.count += 1
                self.beat_pub.publish(ptime)
                rospy.loginfo("Published time is %f",ptime.data)



if __name__ == "__main__":
    try:  
        ROSINIT()  
        rospy.spin()  

    except rospy.ROSInterruptException:  
        rospy.loginfo("Exploring maze finished.")