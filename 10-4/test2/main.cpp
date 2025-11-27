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

    // 사전에서 가장 뒤에 오는 단어 찾기 (내림차순 정렬)
    sort(v.begin(), v.end(), greater<string>());

    // 가장 첫 번째 단어가 사전상 가장 뒤에 오는 단어
    cout << "사전에서 제일 뒤에 나오는 단어는 " << v[0] << endl;

    return 0;
}
