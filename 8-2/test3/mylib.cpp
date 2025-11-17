// **********************************************
// 제 목 : 8-2
// 날 짜 : 2025년 11월17일
// 작성자 : 2001485 김선우
// **********************************************
// mylib.cpp - 도형 클래스들의 구현부
#include "mylib.hpp"

//Shape 구현
Shape::Shape(int x, int y) : x(x), y(y) {
    cout << "Shape 생성" << endl;
}

Shape::~Shape() {
    cout << "Shape 소멸" << endl;
}

int Shape::getX() { return x; }
int Shape::getY() { return y; }

// Circle 구현
Circle::Circle(int x, int y, int r) 
    : Shape(x, y), radius(r) // 부모 생성자 먼저 호출
{
    cout << "Circle 생성" << endl;
}

Circle::~Circle() {
    cout << "Circle 소멸" << endl;
}

void Circle::show() {
    cout << "좌표 (" << getX() << "," << getY() 
         << ")에 반지름 " << radius << "인 원" << endl;
}

//Rect 구현
Rect::Rect(int x, int y, int w, int h)
    : Shape(x, y), width(w), height(h)
{
    cout << "Rect 생성" << endl;
}

Rect::~Rect() {
    cout << "Rect 소멸" << endl;
}

void Rect::show() {
    cout << "좌표 (" << getX() << "," << getY()
         << ")에 폭" << width << ", 높이" << height << "인 직사각형" << endl;
}

//Triangle 구현
Triangle::Triangle(int x, int y, int b, int h)
    : Shape(x, y), base(b), height(h)
{
    cout << "Triangle 생성" << endl;
}

Triangle::~Triangle() {
    cout << "Triangle 소멸" << endl;
}

void Triangle::show() {
    cout << "좌표 (" << getX() << "," << getY()
         << ")에 밑변" << base << ", 높이" << height << "인 삼각형" << endl;
}
