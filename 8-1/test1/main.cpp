// **********************************************
// 제 목 : cpp 8-1
// 날 짜 : 2025년 11월13일
// 작성자 : 2001485 김선우
// **********************************************
#include "mylib.hpp"

int main() {
    // 도형 객체 생성
    Circle x;
    Rect y;
    Triangle z;

    // 각 도형의 정보 설정
    x.setCircle(0, 0, 2);
    y.setRect(1, 1, 5, 10);
    z.setTriangle(2, 2, 3, 4);

    // 각 도형의 정보 출력
    x.show();
    y.show();
    z.show();

    return 0;
}
