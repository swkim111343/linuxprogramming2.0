// **********************************************
// 제 목 : 10-5_2차원 배열
// 날 짜 : 2025년 12월 1일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
using namespace std;
int main() {
    int score[3][3];
    int sum;
    double avg[3];
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력:";
        for (int j = 0; j < 3; j++)
            cin >> score[i][j];
    }
    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += score[i][j];
        }
        avg[i] = sum / 3.0;
    }

    int best = 0;
    for (int i = 1; i < 3; i++) {
        if (avg[i] > avg[best]) {
            best = i;
        }
    }

    cout << "최우수 학생은 " << best + 1 << "번째 학생이고 " << "평균점수는 " << avg[best] << "점입니다." << endl;

    return 0;
}