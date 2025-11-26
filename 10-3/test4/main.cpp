// **********************************************
// 제 목 :  10-3
// 날 짜 :  2025년11월26일
// 작성자 :  2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int num;

    cout << "숫자를 입력하세요:";
    
    // 정수 5개 입력받아 벡터에 저장
    for (int i = 0; i < 5; i++) {
        cin >> num;
        v.push_back(num);
    }

    // 초기 벡터 출력
    cout << "초기벡터원소:";
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i);
    }
    cout << endl;

    // 음수 제거(erase 사용)
    for (int i = 0; i < v.size(); ) {
        if (v.at(i) < 0) {
            v.erase(v.begin() + i);   // 음수면 제거 (i 증가 X)
        } else {
            i++;   // 양수면 다음 인덱스로
        }
    }

    // 음수 삭제 후 출력
    cout << "음수를삭제후벡터원소:";
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i);
    }
    cout << endl;

    // 평균 계산
    float sum = 0.0;
    for (int i = 0; i < v.size(); i++) {
        sum += v.at(i);
    }

    float avg = 0.0;
    if (!v.empty())
        avg = sum / v.size();

    cout << "평균값:" << avg << endl;

    return 0;
}
