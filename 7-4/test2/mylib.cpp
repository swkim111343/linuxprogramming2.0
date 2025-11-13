//**********************************************
//제 목 : c++7장-4(실습 과제 2)    
//날 짜 : 2025년11월10일
//작성자 : 2001485김선우
// **********************************************
#include "mylib.hpp"

namespace A {

	// 생성자 구현
	Complex::Complex(int real, int img)
	{
		this->real = real;
		this->img = img;
		cout << "복소수 " << real << "+" << img << "j 생성" << endl;
	}

	// 복소수 출력
	void Complex::show()
	{
		cout << real << "+" << img << "j" << endl;
	}

	// 전위 증가 연산자 (++x)
	Complex& operator++(Complex& c)
	{
		c.real++;
		c.img++;
		return c;
	}

	// 후위 감소 연산자 (x--)
	Complex operator--(Complex& c, int)
	{
		Complex tmp = c; // 현재 값 저장
		c.real--;
		c.img--;
		return tmp;       // 감소 전 값 반환
	}
}
