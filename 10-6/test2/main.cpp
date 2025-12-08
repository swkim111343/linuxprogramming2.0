// **********************************************
// 제 목 : 10-6_2차원배열
// 날 짜 : 2025년 12월8일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> score(3, vector<int>(3)); //3명이 3과목
    vector<double> avg(3); //각 학생의 평균 저장

    //성적 입력
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";
        cin >> score[i][0] >> score[i][1] >> score[i][2];
    }

    //평균 계산
    for (int i = 0; i < 3; i++) {
        avg[i] = (score[i][0] + score[i][1] + score[i][2]) / 3.0;
    }

    //최우수 학생 찾기
    int best = 0;
    for (int i = 1; i < 3; i++) {
        if (avg[i] > avg[best]) {
            best = i;
        }
    }

    //출력
    cout << "최우수 학생은 " << best + 1 << "번째 학생이고 평균점수는 "
        << avg[best] << "점이다." << endl;

    return 0;
}
