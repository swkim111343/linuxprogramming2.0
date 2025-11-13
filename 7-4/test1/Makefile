//**********************************************
//제 목 : c++7장-4(실습 과제 1)    
//날 짜 : 2025년11월10일
//작성자 : 2001485김선우
// **********************************************
# C++ 컴파일러 이름을 변수 CX에 저장
CX = g++

# -g: 디버그 모드, -Wall: 모든 경고 메시지 출력
CXFLAGS = -g -Wall

# 목적 파일 목록
OBJS = main.o mylib.o

# 실행 파일 이름
TARGET = complex

# 실행 파일 생성 규칙
$(TARGET): $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

# main.cpp → main.o 생성 규칙
main.o: main.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c main.cpp

# mylib.cpp → mylib.o 생성 규칙 (오류 수정됨)
mylib.o: mylib.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c mylib.cpp

# 임시/생성 파일 삭제
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)
