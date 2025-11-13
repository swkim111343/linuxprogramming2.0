// **********************************************
// 제 목 : cpp 8-1
// 날 짜 : 2025년 11월13일
// 작성자 : 2001485 김선우
// **********************************************
#include "mylib.hpp"

int main() {
    Circle x;
    Rect y;
    Triangle z;

    x.setCircle(0, 0, 2);
    y.setRect(1, 1, 5, 10);
    z.setTriangle(2, 2, 3, 4);

    x.show();
    y.show();
    z.show();

    return 0;
}
