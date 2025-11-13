//**********************************************
//제 목 : c++7장-4(실습 과제 2)    
//날 짜 : 2025년11월10일
//작성자 : 2001485김선우
// **********************************************
#ifndef MYLIB_HPP_
#define MYLIB_HPP_

#include <iostream>
using namespace std;

// 복소수 관련 기능을 담은 namespace A 정의
namespace A {
	class Complex {
	private:
		int real;   // 실수부
		int img;    // 허수부

	public:
		// 생성자
		Complex(int real = 0, int img = 0);

		// 복소수의 실수부와 허수부 출력
		void show();

		// 전위 증가 연산자 (++x) - 프렌드 함수로 선언
		friend Complex& operator++(Complex& c);

		// 후위 감소 연산자 (x--) - 프렌드 함수로 선언
		friend Complex operator--(Complex& c, int);
	};
}

#endif
