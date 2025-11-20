// **********************************************
// 제 목 : 10-1
// 날 짜 : 2025년 11월20일
// 작성자 : 2001485 김선우 
// **********************************************
#pragma once

// 템플릿 함수 정의
template <class T>
T getmax(T data[], int n) {
    T max = data[0];
    for (int i = 1; i < n; i++) {
        if (data[i] > max)
            max = data[i];
    }
    return max;
}
