// **********************************************
// 제 목 : 7-3(실습 과제 2)-mylib.hpp
// 날 짜 : 2025년 11월 6일
// 작성자 : 2001485 김선우
// **********************************************
#ifndef MYLIB_HPP
#define MYLIB_HPP

class Complex {
private:
    int real;  // 실수부
    int img;   // 허수부
public:
    Complex(int r = 0, int i = 0);         // 생성자
    Complex operator*(const Complex& other); // 곱셈 연산자
    void show();                           // 출력
};

#endif
