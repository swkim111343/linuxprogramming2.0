// **********************************************
// 제 목 : 10-6_2차원배열
// 날 짜 : 2025년 12월8일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //3x3 행렬을 vector<vector<int>>로 저장
    vector<vector<int>> m = {
        {-5,   2,  35},
        {-20,  5, 100},
        {-75,  5, -25}
    };

    int maxVal = m[0][0];
    int maxRow = 0, maxCol = 0;

    //최대값과 위치 찾기
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m[i][j] > maxVal) {
                maxVal = m[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    //출력(행과 열은 1부터 표시)
    cout << "최대값은 " << maxVal << endl;
    cout << "위치는 " << maxRow + 1 << "행 " << maxCol + 1 << "열" << endl;

    return 0;
}
