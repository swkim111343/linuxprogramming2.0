// **********************************************
// 제 목 : 7-3(실습 과제 1)-mylib.hpp
// 날 짜 : 2025년 11월6일
// 작성자 : 2001485 김선우
// **********************************************
#ifndef MYLIB_HPP
#define MYLIB_HPP

class Complex {
private:
    double real;
    double img;
public:
    Complex(double r = 0, double i = 0);
    Complex operator+(const Complex& other) const;
    void show() const;
};

#endif
