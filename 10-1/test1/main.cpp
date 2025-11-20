// **********************************************
// 제 목 : 10-1
// 날 짜 : 2025년 11월20일
// 작성자 : 2001485 김선우 
// **********************************************
#include <iostream>
#include "mylib.hpp"
using namespace std;

int main() {
    int a[5] = { -5, 10, 30, 20, 6 };
    double b[4] = { 3.14, 1.5, -6.0, 0.5 };
    char c[3] = { 'a', 'x', 'p' };

    cout << "정수배열의 최대값은 " << getmax(a, 5) << endl;
    cout << "실수배열의 최대값은 " << getmax(b, 4) << endl;
    cout << "문자배열의 최대값은 " << getmax(c, 3) << endl;

    return 0;
}
