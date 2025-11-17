// **********************************************
// 제 목 : 8-2
// 날 짜 : 2025년 11월17일
// 작성자 : 2001485 김선우
// **********************************************
#include "mylib.hpp"

//TV
TV::TV() {
    setSize(20);
    cout << "TV 생성" << endl;
}

TV::TV(int size) {
    this->size = size;
    cout << "TV 생성" << endl;
}

void TV::setSize(int size) { this->size = size; }
int TV::getSize() { return size; }

//WideTV
WideTV::WideTV() : TV() {
    videoIn = false;
    cout << "WideTV 생성" << endl;
}

WideTV::WideTV(int size, bool videoIn) : TV(size) {
    this->videoIn = videoIn;
    cout << "WideTV 생성" << endl;
}

void WideTV::setWideTV(int size, bool videoIn) {
    setSize(size);
    this->videoIn = videoIn;
}

bool WideTV::getVideoIn() { return videoIn; }

//SmartTV
SmartTV::SmartTV() : WideTV() {
    ipAddr = "0.0.0.0";
    cout << "SmartTV 생성" << endl;
}

SmartTV::SmartTV(string ipAddr, int size) : WideTV(size, true) {
    this->ipAddr = ipAddr;
    cout << "SmartTV 생성" << endl;
}

void SmartTV::setSmartTV(int size, bool videoIn, string ipAddr) {
    setWideTV(size, videoIn);
    this->ipAddr = ipAddr;
}

string SmartTV::getIpAddr() { return ipAddr; }
