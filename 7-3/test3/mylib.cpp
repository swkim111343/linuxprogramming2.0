// **********************************************
// 제 목 : 7-3(실습 과제 3)-main.cpp
// 날 짜 : 2025년 11월6일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include "mylib.hpp"
using namespace std;

Power::Power(int k, int p) : kick(k), punch(p) {}

void Power::show() {
    cout << "kick=" << kick << ",punch=" << punch << endl;
}

Power Power::operator-(int val) {
    int newKick = kick - val;
    int newPunch = punch - val*2; // 출력 예제에 맞춰 punch는 2배로 감소
    if(newKick < 0) newKick = 0;
    if(newPunch < 0) newPunch = 0;
    return Power(newKick, newPunch);
}
