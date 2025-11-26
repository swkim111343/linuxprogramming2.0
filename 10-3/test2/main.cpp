// **********************************************
// 제 목 :  10-3
// 날 짜 :  2025년11월26일
// 작성자 :  2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;   // 정수를 저장할 벡터
    int num;

    cout << "정수 4개를 입력하시오: ";

    // vector 멤버함수 push_back()만 이용해서 입력 저장
    for (int i = 0; i < 4; i++) {
        cin >> num;
        v.push_back(num);
    }

    // 최소값과 최대값을 vector의 첫 번째 요소로 초기화
    int minValue = v.front();
    int maxValue = v.front();

    // vector 멤버함수 size()와 at() 사용
    for (int i = 1; i < v.size(); i++) {
        if (v.at(i) < minValue)
            minValue = v.at(i);
        if (v.at(i) > maxValue)
            maxValue = v.at(i);
    }

    cout << "최대값은" << maxValue << ", 최소값은" << minValue << "입니다" << endl;

    return 0;
}
