// **********************************************
// 제 목 : 8-2
// 날 짜 : 2025년 11월17일
// 작성자 : 2001485 김선우
// **********************************************
#include "mylib.hpp"

int main() {
    SmartTV htv;  
    htv.setSmartTV(50, false, "192.0.0.2");

    cout << "size = " << htv.getSize() << endl;
    cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl;
    cout << "IP = " << htv.getIpAddr() << endl;

    return 0;
}
