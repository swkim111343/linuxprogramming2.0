// **********************************************
// 제 목 : 10-4
// 날 짜 : 2025년 11월27일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
#include <vector>
#include <algorithm>   // max_element 사용을 위해 필요
using namespace std;

// 이름과 점수를 저장하는 Student 클래스 정의
class Student {
private:
    string name;   // 학생 이름
    int score;     // 학생 점수

public:
    // 기본 생성자 + 매개변수 있는 생성자
    Student(string n = "", int s = 0) : name(n), score(s) {}

    // 이름 반환 함수
    string getName() const { return name; }

    // 점수 반환 함수
    int getScore() const { return score; }

    /*
        < 연산자 오버로딩
        sort, max_element, min_element 등에서
        두 Student 객체를 비교할 때 호출됨.

        점수가 작은 경우 true를 반환 → 작은 값으로 간주
    */
    bool operator<(const Student& other) const {
        return this->score < other.score;
    }
};

int main() {
    vector<Student> st(3); // Student 객체 3개를 저장하는 vector

    // 학생 정보 입력
    for (int i = 0; i < 3; i++) {
        string name;
        int score;

        cout << "이름과 성적을 입력: ";
        cin >> name >> score;

        // 입력값으로 Student 객체 생성하여 벡터에 저장
        st[i] = Student(name, score);
    }

    /*
        max_element는 가장 큰 객체를 반환한다.
        Student 클래스의 < 연산자를 기준으로 비교한다.
        즉, 점수가 가장 높은 Student 객체를 찾아서 iterator를 반환.
    */
    auto best = max_element(st.begin(), st.end());

    // 출력
    cout << "최우수학생은" << endl;
    cout << "이름:" << best->getName() << endl;
    cout << "성적:" << best->getScore() << "점" << endl;

    return 0;
}
