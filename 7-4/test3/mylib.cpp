//**********************************************
//제 목 : c++7장-4(실습 과제 3)    
//날 짜 : 2025년11월10일
//작성자 : 2001485김선우
// **********************************************
#include "mylib.hpp"

// 생성자 구현
Power::Power(int kick, int punch) {
    this->kick = kick;
    this->punch = punch;
}

// 상태 출력 함수 구현
void Power::show() {
    cout << "kick=" << kick << ",punch=" << punch << endl;
}

// friend 함수로 정수 * Power 연산 구현
Power operator*(int n, Power p) {
    Power tmp;
    tmp.kick = p.kick * n;
    tmp.punch = p.punch * n;
    return tmp;
}
