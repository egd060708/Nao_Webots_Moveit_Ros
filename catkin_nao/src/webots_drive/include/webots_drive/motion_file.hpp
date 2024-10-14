#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

// 此类型用于读写动作组数据并且储存基本信息
class motionF_Classdef{
  private:
    string fileAddr; // 文件的储存地址
    string groupName; // 动作组的名字
    uint16_t groupNum; // 动作组点的个数
    uint16_t jointNum; // 关节的个数
    vector<double> data; // 存储的动作组参数
    double groupT = 1.; // 动作组完成总时间（默认为1）
    double timeStep; // 动作组点的执行时间间隔
    std::mutex mtx;
  public:
    // 构造函数
    motionF_Classdef(const string &_addr):fileAddr(_addr){
      data.resize(groupNum*jointNum);// 对容器容量预拓展
    }
    motionF_Classdef(const string &_addr, const string &_name):fileAddr(_addr),groupName(_name){
      data.resize(groupNum*jointNum);// 对容器容量预拓展
    }
    motionF_Classdef(const string &_addr, const string &_name, const uint16_t _gNum, uint16_t _jNum):fileAddr(_addr),groupName(_name), groupNum(_gNum), jointNum(_jNum){
      data.resize(groupNum*jointNum);// 对容器容量预拓展
      timeStep = groupT / ((double)groupNum);
    }
    // 更新目录地址
    void updateAddr(const string &_addr)
    {
      fileAddr = _addr;
    }
    // 设置动作组名称
    void setName(const string &_name)
    {
      groupName = _name;
    }
    // 更新动作组配置
    void updateSize(uint16_t _gNum,uint16_t _jNum){
      groupNum = _gNum;
      jointNum = _jNum;
      data.resize(groupNum*jointNum);// 重新分配内存
      timeStep = groupT / ((double)groupNum);
    }
    // 更新动作组完成时间
    void setGroupT(double _t){
      groupT = _t;
      timeStep = groupT / ((double)groupNum);
    }
    // 从当前配置中导出文件
    void writeFile()
    {
      string config = fileAddr + groupName;
      ofstream outFile(config);

      /* 用于验证是否成功创建文件 */
      // if (!access(fileAddr.c_str(), F_OK)) {
      //   std::cout << " access" << std::endl;
      // }else {
      //   std::cout << " not access " << std::endl;
      // }
      if(!outFile.is_open())
      {
        cout << "fail to open file" << endl;
        return;
      }
      // cout << "success to open file" << endl;

      /* 把动作组基本属性描述导出 */
      outFile << groupName << " " << groupNum << " " << jointNum << " " << timeStep << "\n";
      /* 动作组参数导出 */
      for(int i = 0;i < groupNum;i++)
      {
        for(int j = 0;j < jointNum;j++)
        {
          outFile << data[i * jointNum + j] << " ";
        }
        outFile << "\n";
      }
      outFile.close();
    }
    // 读取文件并更新配置和数据
    void readFile()
    {
      string config = fileAddr + groupName;
      ifstream inFile(config); // 打开文件

      /* 用于验证是否成功创建文件 */
      // if (!access(fileAddr.c_str(), F_OK)) {
      //   std::cout << " access" << std::endl;
      // }else {
      //   std::cout << " not access " << std::endl;
      // }
      if(!inFile.is_open())
      {
        cout << "fail to open file" << endl;
        return;
      }
      // cout << "success to open file" << endl;

      /* 通过行读取的方式导入文件中的属性和动作组数据 */
      string line,word;
      for(int i = 0;i <= groupNum && getline(inFile,line);i++)
      {
        istringstream words(line); /* 字符串str必须是使用空格分开的。
                                      为了得到各个字串，可以进行按照空格的坐标进行分割。
                                      但是可以借助流进行自动分割 */
        if(!i)
        {
          // 把第一行配置内容读入
          string _gNum,_jNum,_step;
          words >> groupName >> _gNum >> _jNum >> _step; 
          groupNum = static_cast<uint16_t>(stoi(_gNum));
          jointNum = static_cast<uint16_t>(stoi(_jNum));
          data.resize(groupNum*jointNum);// 重新分配内存
          // timeStep = stod(_step);
          timeStep = groupT / ((double)groupNum);
          // cout << groupName << " " << groupNum << " " << jointNum << " " << timeStep << endl;
        }
        else
        {
          // 把动作组参数读入
          for(int j = 0;j < jointNum && (words >> word);j++)
          {
            //data.push_back(stod(word)); // 把动作组数据转成double送进容器
            data[(i-1)*jointNum + j] = stod(word);
          }
        }
      }
      inFile.close(); // 关闭文件
    }
    // 外部获取动作组数据
    const vector<double>& getData(){
      return data;
    }
    // 外部动作组写入
    void setData(vector<double> _data){
      data = _data;
    }
    void setData(uint16_t _row,uint16_t _col,double _val)
    {
      data[_row*jointNum + _col] = _val;
    }
    // 读取一些属性
    const uint16_t& getGnum(){
      return groupNum;
    }
    const uint16_t& getJnum(){
      return jointNum;
    }
    const string& getName(){
      return groupName;
    }
    const double& getGroupT(){
      return groupT;
    }
    const double& getTimeStep(){
      return timeStep;
    }

    /* 更新动作组 */
    void updateGroup(string _fileName,double _next_time)
    {
      mtx.lock();
      this->setName(_fileName);
      this->readFile();
      this->setGroupT(_next_time);
      mtx.unlock();
    }
};