// **********************************************
// 제 목 : 10-5_2차원 배열
// 날 짜 : 2025년 12월 1일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
using namespace std;

int main() {
    int A[3][3] = { -5, 2, 35, -20, 5, 100, -75, 5, -25 };

    int maxVal = A[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "최대값은 " << maxVal << endl;
    cout << "위치는 " << maxRow + 1 << "행 " << maxCol + 1 << "열" << endl;

    return 0;
}
