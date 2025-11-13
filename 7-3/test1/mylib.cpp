// **********************************************
// 제 목 : 7-3(실습 과제 1)-mylib.cpp
// 날 짜 : 2025년 11월6일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include "mylib.hpp"

Complex::Complex(double r, double i) : real(r), img(i) {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, img + other.img);
}

void Complex::show() const {
    std::cout << real;
    if (img >= 0)
        std::cout << "+" << img << "j" << std::endl;
    else
        std::cout << img << "j" << std::endl;
}
