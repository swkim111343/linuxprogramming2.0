// **********************************************
// 제 목 :  10-2
// 날 짜 :  2025년11월26일
// 작성자 :  2001485 김선우
// **********************************************
#include <iostream>
using namespace std;

/*
    템플릿 클래스 GClass
    - 두 개의 서로 다른 타입(T1, T2)을 동시에 저장할 수 있는 클래스
    - set(): 두 값을 객체 내부에 저장
    - get(): 저장된 값을 참조변수로 받아서 전달
    - swap(): 두 멤버 data1과 data2의 값을 교환
*/
template<class T1, class T2>
class GClass {
    T1 data1;   // 첫 번째 데이터
    T2 data2;   // 두 번째 데이터

public:
    // 기본 생성자: 두 값 모두 0으로 초기화
    GClass() { 
        data1 = 0; 
        data2 = 0; 
    }

    // 값 설정 함수
    void set(T1 a, T2 b) { 
        data1 = a; 
        data2 = b; 
    }

    // 값 반환 함수(참조로 전달)
    void get(T1& a, T2& b) { 
        a = data1; 
        b = data2; 
    }

    // 두 변수의 값을 서로 교환하는 함수
    void swap() {
        T1 temp = data1;
        data1 = data2;
        data2 = temp;
    }
};

int main() {

    // int 타입
    int a, b;
    GClass<int, int> x;      // int, int 타입으로 템플릿 클래스 생성
    x.set(2, 5);             // 값 저장
    x.get(a, b);             // 값 읽기
    cout << "a=" << a << '\t' << "b=" << b << endl;

    x.swap();                // 두 값 교환
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;


    // double 타입 
    double c, d;
    GClass<double, double> y;   // double, double 타입
    y.set(3.14, 6.28);
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;

    y.swap();                   // 두 값 교환
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;

    return 0;
}
