// **********************************************
// 제 목 : 10-1
// 날 짜 : 2025년 11월20일
// 작성자 : 2001485 김선우 
// **********************************************
#pragma once
#include "mylib.hpp"

// ---- Circle 멤버함수 정의 ----
Circle::Circle(int radius) {
    this->radius = radius;
}

int Circle::getRadius() {
    return radius;
}

bool Circle::operator>(const Circle& c) {
    return this->radius > c.radius;
}

// ---- bigger 템플릿 함수 정의 ----
template <class T>
T bigger(T a, T b) {
    if (a > b) return a;
    else return b;
}
