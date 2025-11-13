// **********************************************
// 제 목 : cpp 8-1
// 날 짜 : 2025년 11월13일
// 작성자 : 2001485 김선우
// **********************************************
#ifndef MYLIB_HPP
#define MYLIB_HPP

#include <iostream>
using namespace std;

//기본 클래스 Shape, 도형의 공통된 좌표(x, y)를 관리
class Shape {
private:
    int x, y; // 도형의 위치 좌표
public:
    void setXY(int a, int b);    // 좌표 설정 함수
    void showXY() const;         // 좌표 출력 함수
    int getX() const;            // x값 반환
    int getY() const;            // y값 반환
};

// 원 클래스 (Circle), Shape를 상속받아 반지름 r 추가
class Circle : public Shape {
private:
    int r; // 반지름
public:
    void setCircle(int x, int y, int r); // 원 정보 설정
    void show() const;                   // 원 정보 출력
};

//직사각형 클래스 (Rect): 폭(width), 높이(height) 추가
class Rect : public Shape {
private:
    int width, height;
public:
    void setRect(int x, int y, int w, int h); // 직사각형 정보 설정
    void show() const;                        // 직사각형 정보 출력
};

//삼각형 클래스 (Triangle), 밑변(base), 높이(height) 추가
class Triangle : public Shape {
private:
    int base, height;
public:
    void setTriangle(int x, int y, int b, int h); // 삼각형 정보 설정
    void show() const;                            // 삼각형 정보 출력
};

#endif
