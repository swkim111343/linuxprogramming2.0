// **********************************************
// 제 목 : cpp 8-1
// 날 짜 : 2025년 11월13일
// 작성자 : 2001485 김선우
// **********************************************
#ifndef MYLIB_HPP
#define MYLIB_HPP

#include <iostream>
using namespace std;

//기본 클래스 Shape
class Shape {
protected:
    int x, y; // 파생 클래스에서 접근 가능하도록 protected
public:
    void setXY(int a, int b); // 좌표 설정 함수
};

//Circle 클래스, 반지름 r을 가짐
class Circle : public Shape {
private:
    int r;
public:
    void setCircle(int a, int b, int radius); // 원 정보 설정
    void show() const;                        // 원 정보 출력
};

//Rect 클래스, 폭(width), 높이(height)를 가짐
class Rect : public Shape {
private:
    int width, height;
public:
    void setRect(int a, int b, int w, int h); // 직사각형 정보 설정
    void show() const;                        // 직사각형 정보 출력
};

//,Triangle 클래스: 밑변(base), 높이(height)를 가짐
class Triangle : public Shape {
private:
    int base, height;
public:
    void setTriangle(int a, int b, int btm, int h); // 삼각형 정보 설정
    void show() const;                              // 삼각형 정보 출력
};

#endif
