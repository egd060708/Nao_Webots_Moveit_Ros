#!/usr/bin/env python 
# -*- coding: utf-8 -*-

import librosa
import matplotlib.pyplot as plt
import librosa.display
import numpy as np
import soundfile
import sounddevice
import os
import pygame
from arcade import load_sound,play_sound,stop_sound
import time

# 使用sounddevice播放音乐(可以使用数据和采样频率进行播放)
def device_play(data,sr,duration=5):
    sounddevice.stop()
    sounddevice.play(data,sr)
    time.sleep(duration)
    sounddevice.stop()

# 用playgame库播放音乐，但无法控制播放时长，程序阻塞
def play_audio(audio_file):
  pygame.mixer.init() # 初始化
  pygame.mixer.music.load(audio_file) # 加载文件
  pygame.mixer.music.play() # 播放
  while pygame.mixer.music.get_busy(): # 等待播放完毕
      pygame.time.Clock().tick(10)

# 用arcade库播放音乐并控制播放时长（无阻塞）
def audio_play(audio_path,duration):
    sound = load_sound(audio_path)
    player=play_sound(sound)
    time.sleep(duration)
    stop_sound(player)

def get_duration_mp3_and_wav(file_path):   #获取mp3/wav音频文件时长
     duration = librosa.get_duration(filename=file_path) # 如果提供filename，则所有其他参数都将被忽略，并且持续时间是直接从音频文件中计算得出的。
     return duration
 
if __name__ == "__main__":
    # 读取音乐的总时长
    file_path = '/home/lu/音乐/Scorpions-alwaysSomewhere.mp3'
    duration = get_duration_mp3_and_wav(file_path) # mp3和wav均可
    print(f'duration = {duration}') # 输出歌曲时长（单位为秒）

    # 截取音乐片段
    y, sr2 = librosa.load(file_path)
    print(f'sr = {sr2}')#输出采样频率
    start = 50
    get_duration = 10
    stop = start + get_duration
    audio_dst = y[start*sr2:stop*sr2]
    soundfile.write('/home/lu/音乐/Scorpions-alwaysSomewhere.wav', audio_dst, sr2)   
    # 重新载入截取的片段
    dongda, sr = librosa.load('/home/lu/音乐/Scorpions-alwaysSomewhere.wav')
    
    # 实时播放音乐
    # audio_play(file_path,5)
    # play_audio(file_path)
    # device_play(dongda,sr,get_duration)

    # # 显示音乐波形图
    # plt.figure(figsize=(14, 5))
    # librosa.display.waveshow(dongda, sr=sr) # 绘制音频频率图
    # plt.show() # 显示一遍图像



    # # 过零率

    # zcrs_init = librosa.feature.zero_crossing_rate(dongda)

    # zcrs = librosa.feature.zero_crossing_rate(dongda + 0.0001)

    # # 画出音频波形和每一帧的过零率（绿线）vs处理后得到的过零率（橙线）
    # plt.figure(figsize=(14, 5))

    # zcrs_times = librosa.frames_to_time(np.arange(len(zcrs[0])), sr=sr, hop_length=512)
    # librosa.display.waveshow(dongda, sr=sr, alpha=0.7)
    # plt.plot(zcrs_times,zcrs[0], label='Processed ZCR', lw=4, color='orange')
    # plt.plot(zcrs_times,zcrs_init[0], label='Initial ZCR', lw=2, alpha=0.5, color='green')
    # plt.legend()
    # plt.show()

    # Zooming in
    # plt.plot(dongda)
    # plt.grid()#网格



    # # 过零点和质心

    # #用librosa验证：librosa.feature.zero_crossing_rate(y, frame_length = 2048, hop_length = 512, center = True) 
    # zero_crossings = librosa.zero_crossings(dongda, pad=False)
    # print(sum(zero_crossings))  #过零点个数

    # spectral_centroids = librosa.feature.spectral_centroid(y=dongda)[0]#质心
    # print(spectral_centroids.shape)

    # # Computing the time variable for visualization
    # frames = range(len(spectral_centroids))
    # t = librosa.frames_to_time(frames)
    # # Normalising the spectral centroid for visualisation
    # from sklearn import preprocessing
    # def normalize(x, axis=0):
    #     return preprocessing.minmax_scale(x,axis=axis)
    # #Plotting the Spectral Centroid along the waveform
    # librosa.display.waveshow(dongda, sr=sr, alpha=0.4)
    # plt.plot(t, normalize(spectral_centroids), color='r')



    # # 分开提取人声和节奏

    # harmonic, percussive = librosa.effects.hpss(dongda)
    # device_play(harmonic,sr,get_duration) # 突出人声
    # device_play(percussive,sr,get_duration) # 突出节奏


    # 节拍识别
    tempo, beats  =  librosa.beat.beat_track(y = y, sr = sr2)#tempo是节拍的个数，beat_frames 是节拍的帧数 
    print(f'tempo = {tempo}')
    print(f'beats = {beats}')

    # Or use timing instead of frame indices
    times  =  librosa.frames_to_time(beats, sr = sr2)
    print(f'times = {times}')
    y_beat_times  =  librosa.clicks(times = times, sr = sr2)# 生成一段节拍声音信号
    print(f'y_beat_times = {y_beat_times}')
    # device_play(y_beat_times,sr2,50)
    #Or：y_beats  =  librosa.clicks(frames = beats, sr = sr)
    #Or generate a signal of the same length as y： y_beats  =  librosa.clicks(frames = beats, sr = sr, length = len (y)) 
    #Or with a click frequency of 880Hz and a 500ms sample：y_beat_times880  =  librosa.clicks(times = times, sr = sr, click_freq = 880 , click_duration = 0.5 )
    
    # Display click waveform next to the spectrogram
    plt.figure()
    S  =  librosa.feature.melspectrogram(y = y, sr = sr2)
    ax  =  plt.subplot( 2 , 1 , 2 )
    librosa.display.specshow(librosa.power_to_db(S, ref = np.max ),
                              x_axis = 'time' , y_axis = 'mel' )
    plt.subplot( 2 , 1 , 1 , sharex = ax)
    librosa.display.waveshow(y_beat_times, sr = sr2, label = 'Beat clicks' )
    plt.legend()
    plt.xlim( 0 ,  200 )
    plt.tight_layout()
    plt.show()





    




