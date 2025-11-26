// **********************************************
// 제 목 :  10-3
// 날 짜 :  2025년11월26일
// 작성자 :  2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v;   // 문자열을 저장할 vector
    string s;

    // 5개의 문자열 입력
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        cin >> s;
        v.push_back(s);   // vector 멤버함수 사용
    }

    // 첫 번째 요소를 기준으로 초기화
    string last = v.at(0);

    // 사전에서 가장 뒤에 오는 단어 찾기
    for (int i = 1; i < v.size(); i++) {
        if (v.at(i) > last)   // 문자열 비교는 사전 순으로 비교됨
            last = v.at(i);
    }

    cout << "사전에서 제일 뒤에 나오는 단어는" << last << "입니다" << endl;

    return 0;
}
