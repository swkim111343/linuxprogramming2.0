// **********************************************
// 제 목 : 10-4
// 날 짜 : 2025년 11월27일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
#include <algorithm>   // sort, max_element, min_element
using namespace std;

int main() {
    vector<int> v(4);

    cout << "정수 4개를 입력하시오: ";
    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    }

    // 최대값과 그 위치
    auto max_it = max_element(v.begin(), v.end());
    int max_index = distance(v.begin(), max_it) + 1;  // 1-based index

    // 최소값과 그 위치
    auto min_it = min_element(v.begin(), v.end());
    int min_index = distance(v.begin(), min_it) + 1;  // 1-based index

    cout << "최대값은 " << max_index << "번째 값 " << *max_it << endl;
    cout << "최소값은 " << min_index << "번째 값 " << *min_it << endl;

    // 오름차순 정렬
    vector<int> asc = v; 
    sort(asc.begin(), asc.end());

    cout << "오름차순 결과는 ";
    for (int i = 0; i < 4; i++) {
        cout << asc[i];
        if (i < 3) cout << ", ";
    }
    cout << endl;

    // 내림차순 정렬
    vector<int> desc = v;
    sort(desc.begin(), desc.end(), greater<int>());

    cout << "내림차순 결과는 ";
    for (int i = 0; i < 4; i++) {
        cout << desc[i];
        if (i < 3) cout << ", ";
    }
    cout << endl;

    return 0;
}
