// **********************************************
// 제 목 : 8-2
// 날 짜 : 2025년 11월17일
// 작성자 : 2001485 김선우
// **********************************************
#ifndef MYLIB_HPP
#define MYLIB_HPP

#include <iostream>
#include <string>
using namespace std;

//TV 클래스
class TV {
    int size;
public:
    TV();
    TV(int size);
    void setSize(int size);
    int getSize();
};

//WideTV 클래스
class WideTV : public TV {
    bool videoIn;
public:
    WideTV();
    WideTV(int size, bool videoIn);
    void setWideTV(int size, bool videoIn);
    bool getVideoIn();
};

//SmartTV 클래스
class SmartTV : public WideTV {
    string ipAddr;
public:
    SmartTV();
    SmartTV(string ipAddr, int size);
    void setSmartTV(int size, bool videoIn, string ipAddr);
    string getIpAddr();
};

#endif
