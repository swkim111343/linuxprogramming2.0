// **********************************************
// 제 목 : 10-6_2차원배열
// 날 짜 : 2025년 12월8일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector 클래스 사용
    vector<vector<int>> A = { {2, 4}, {5, -5} };
    vector<vector<int>> B = { {-2, 3}, {0, -5} };
    vector<vector<int>> C(2, vector<int>(2));

    //행렬덧셈
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //출력
    cout << "연산결과:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << C[i][0] << " " << C[i][1] << endl;
    }

    return 0;
}
