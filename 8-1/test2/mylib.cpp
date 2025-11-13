// **********************************************
// 제 목 : cpp 8-1
// 날 짜 : 2025년 11월13일
// 작성자 : 2001485 김선우
// **********************************************
#include "mylib.hpp"

//Shape 클래스 정의 
void Shape::setXY(int a, int b) {
    x = a;
    y = b;
}

//Circle 클래스 정의
void Circle::setCircle(int a, int b, int radius) {
    setXY(a, b);   // 부모 클래스의 setXY() 호출
    r = radius;
}

void Circle::show() const {
    cout << "좌표 (" << x << "," << y << ")에 반지름 " << r << "인 원" << endl;
}

//Rect 클래스 정의
void Rect::setRect(int a, int b, int w, int h) {
    setXY(a, b);
    width = w;
    height = h;
}

void Rect::show() const {
    cout << "좌표 (" << x << "," << y << ")에 폭" << width << ", 높이" << height << "인 직사각형" << endl;
}

//Triangle 클래스 정의 
void Triangle::setTriangle(int a, int b, int btm, int h) {
    setXY(a, b);
    base = btm;
    height = h;
}

void Triangle::show() const {
    cout << "좌표 (" << x << "," << y << ")에 밑변" << base << ", 높이" << height << "인 삼각형" << endl;
}
