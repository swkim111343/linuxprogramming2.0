// **********************************************
// 제 목 : 8-2
// 날 짜 : 2025년 11월17일
// 작성자 : 2001485 김선우
// **********************************************
// mylib.hpp - 도형 클래스들의 선언부
#ifndef MYLIB_HPP
#define MYLIB_HPP

#include <iostream>
using namespace std;

//Shape 기본 클래스
class Shape {
private:
    int x, y; //위치 좌표 (private으로 은닉)

public:
    Shape(int x, int y);   //위치 값을 설정하는 생성자
    virtual ~Shape();      //소멸자 (가상)

    int getX();            //x 좌표 반환
    int getY();            //y 좌표 반환

    virtual void show() = 0; //각 도형별 정보 출력 (추상 메서드)
};

//Circle 클래스
class Circle : public Shape {
private:
    int radius; //반지름

public:
    Circle(int x, int y, int r); //부모 Shape(x,y) 호출
    ~Circle();
    void show() override;        //원 정보 출력
};

//Rect 클래스
class Rect : public Shape {
private:
    int width, height; //폭, 높이

public:
    Rect(int x, int y, int w, int h); //Shape(x,y) 호출
    ~Rect();
    void show() override;             //직사각형 정보 출력
};

//Triangle 클래스
class Triangle : public Shape {
private:
    int base, height; //밑변, 높이

public:
    Triangle(int x, int y, int b, int h); //Shape(x,y) 호출
    ~Triangle();
    void show() override;                 //삼각형 정보 출력
};

#endif
