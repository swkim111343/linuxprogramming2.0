// **********************************************
// 제 목 : 7-3(실습 과제 2)-main.cpp
// 날 짜 : 2025년 11월 6일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include "mylib.hpp"
using namespace std;

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    sum = x * y;
    cout << "두 복소수의 곱은 ";
    sum.show();
    return 0;
}
