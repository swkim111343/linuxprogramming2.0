// **********************************************
// 제 목 : 7-3(실습 과제 3)-main.cpp
// 날 짜 : 2025년 11월6일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include "mylib.hpp"
using namespace std;

int main() {
    Power a(3, 5), b;
    a.show();  // kick=3,punch=5
    b.show();  // kick=0,punch=0
    b = a - 2;
    a.show();  // kick=3,punch=5
    b.show();  // kick=1,punch=3
    return 0;
}
