// **********************************************
// 제 목 : 7-3(실습 과제 2)-mylib.cpp
// 날 짜 : 2025년 11월 6일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include "mylib.hpp"
using namespace std;

// 생성자
Complex::Complex(int r, int i) : real(r), img(i) {}

// 복소수 곱셈
Complex Complex::operator*(const Complex& other) {
    Complex temp;
    temp.real = real * other.real - img * other.img;
    temp.img  = real * other.img + img * other.real;
    return temp;
}

// 출력
void Complex::show() {
    cout << real << (img >= 0 ? "+" : "") << img << "j" << endl;
}
