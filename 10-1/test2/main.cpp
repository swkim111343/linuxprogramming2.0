// **********************************************
// 제 목 : 10-1
// 날 짜 : 2025년 11월20일
// 작성자 : 2001485 김선우 
// **********************************************
#include <iostream>
#include "mylib.hpp"
using namespace std;

int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << "20과 50중 큰 값은 " << c << endl;

    Circle donut(10), pizza(20), y;
    y = bigger(donut, pizza);
    cout << "donut과 pizza중 큰 반지름은 " << y.getRadius() << endl;

    return 0;
}
