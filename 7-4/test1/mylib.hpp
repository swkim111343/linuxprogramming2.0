//**********************************************
//제 목 : c++7장-4(실습 과제 1)    
//날 짜 : 2025년11월10일
//작성자 : 2001485김선우
// **********************************************
#ifndef MYLIB_HPP_   // 헤더 파일 중복 포함 방지용 매크로
#define MYLIB_HPP_

#include <iostream>  // 표준 입출력 사용을 위한 헤더
using namespace std;

// 복소수 관련 기능을 담은 namespace A 정의
namespace A {
	class Complex {
	private:
		int real;   // 실수부
		int img;    // 허수부

	public:
		// 생성자: 실수부와 허수부를 초기화 (기본값 0)
		Complex(int real = 0, int img = 0);

		// 복소수의 값을 출력하는 멤버 함수
		void show();

		// 전위 증가 연산자 (++x)
		Complex& operator++();

		// 후위 감소 연산자 (x--)
		Complex operator--(int x);
	};
}

#endif // MYLIB_HPP_
