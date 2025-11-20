// **********************************************
// 제 목 : 10-1
// 날 짜 : 2025년 11월20일
// 작성자 : 2001485 김선우 
// **********************************************
#ifndef MYLIB_HPP
#define MYLIB_HPP

// Circle 클래스 선언
class Circle {
    int radius;
public:
    Circle(int radius = 1);
    int getRadius();
    bool operator>(const Circle& c);  // > 연산자 오버로딩
};

// 템플릿 함수 선언
template <class T>
T bigger(T a, T b);

#include "mylib.cpp"   // 템플릿 구현 포함 (중요)

#endif
