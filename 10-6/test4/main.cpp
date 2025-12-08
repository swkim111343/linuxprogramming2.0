// **********************************************
// 제 목 : 10-6_2차원배열
// 날 짜 : 2025년 12월8일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 3x3 원본 행렬을 vector로 저장
    vector<vector<int>> mat = {
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    // 수정된 결과를 저장할 3x3 vector
    vector<vector<int>> result(3, vector<int>(3));

    // 변환: 음수 → 0, 양수 → 255
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] < 0)
                result[i][j] = 0;
            else
                result[i][j] = 255;
        }
    }

    // 출력
    cout << "수정행렬" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
