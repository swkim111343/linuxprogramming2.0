// **********************************************
// 제 목 : 10-4
// 날 짜 : 2025년 11월27일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> v(5);

    // 5개의 문자열 입력
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        cin >> v[i];
    }

    // 사전 순으로 정렬 (오름차순)
    sort(v.begin(), v.end());

    // 정렬된 결과 출력
    cout << "사전에서 나오는 순서" << endl;
    for (const auto& s : v) {
        cout << s << endl;
    }

    return 0;
}
