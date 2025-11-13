//**********************************************
//제 목 : c++7장-4(실습 과제 1)    
//날 짜 : 2025년11월10일
//작성자 : 2001485김선우
// **********************************************
#include "mylib.hpp"

namespace A {

    Complex::Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
        cout << "복소수 " << real << "+" << img << "j 생성" << endl;
    }

    void Complex::show()
    {
        cout << real << "+" << img << "j" << endl;
    }

    Complex& Complex::operator++()
    {
        this->real++;
        this->img++;
        return *this;
    }

    Complex Complex::operator--(int)
    {
        Complex tmp = *this;
        this->real--;
        this->img--;
        return tmp;
    }
}
