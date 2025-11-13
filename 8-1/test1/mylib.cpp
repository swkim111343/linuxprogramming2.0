// **********************************************
// 제 목 : cpp 8-1
// 날 짜 : 2025년 11월13일
// 작성자 : 2001485 김선우
// **********************************************
#include "mylib.hpp"

//shape 클래스 정의

// 좌표 설정 함수
void Shape::setXY(int a, int b) {
    x = a;
    y = b;
}

// 좌표 출력 함수
void Shape::showXY() const {
    cout << "좌표 (" << x << "," << y << ")";
}

// 좌표 반환 함수들
int Shape::getX() const { return x; }
int Shape::getY() const { return y; }


//circle 클래스 정의

// 원의 좌표와 반지름 설정
void Circle::setCircle(int x, int y, int r) {
    setXY(x, y);   // 기본 클래스의 setXY() 사용
    this->r = r;
}

// 원 정보 출력
void Circle::show() const {
    showXY();
    cout << "에 반지름 " << r << "인 원" << endl;
}


//Rect 클래스 정의

// 직사각형의 좌표, 폭, 높이 설정
void Rect::setRect(int x, int y, int w, int h) {
    setXY(x, y);
    width = w;
    height = h;
}

// 직사각형 정보 출력
void Rect::show() const {
    showXY();
    cout << "에 폭" << width << ", 높이" << height << "인 직사각형" << endl;
}


//Triangle 클래스 정의

// 삼각형의 좌표, 밑변, 높이 설정
void Triangle::setTriangle(int x, int y, int b, int h) {
    setXY(x, y);
    base = b;
    height = h;
}

// 삼각형 정보 출력
void Triangle::show() const {
    showXY();
    cout << "에 밑변" << base << ", 높이" << height << "인 삼각형" << endl;
}
