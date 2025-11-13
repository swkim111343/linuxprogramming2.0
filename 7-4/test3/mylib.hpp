//**********************************************
//제 목 : c++7장-4(실습 과제 3)    
//날 짜 : 2025년11월10일
//작성자 : 2001485김선우
// **********************************************
#ifndef MYLIB_HPP_
#define MYLIB_HPP_

#include <iostream>
using namespace std;

// Power 클래스 정의
class Power {
private:
    int kick;
    int punch;

public:
    // 생성자 (기본값 0)
    Power(int kick = 0, int punch = 0);

    // 상태 출력 함수
    void show();

    // friend 함수 선언 (정수 * Power)
    friend Power operator*(int n, Power p);
};

#endif
