// **********************************************
// 제 목 : 7-3(실습 과제 3)-main.cpp
// 날 짜 : 2025년 11월6일
// 작성자 : 2001485 김선우
// **********************************************
#ifndef MYLIB_HPP
#define MYLIB_HPP

class Power {
private:
    int kick;
    int punch;
public:
    Power(int k = 0, int p = 0); // 생성자
    void show();                 // 출력
    Power operator-(int val);    // Power - int 연산
};

#endif
