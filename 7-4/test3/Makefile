//**********************************************
//제 목 : c++7장-4(실습 과제 3)    
//날 짜 : 2025년11월10일
//작성자 : 2001485김선우
// **********************************************
# C++ 컴파일러 지정
CX = g++
# 컴파일 옵션: -g (디버그), -Wall (모든 경고)
CXFLAGS = -g -Wall

# 오브젝트 파일 목록
OBJS = main.o mylib.o

# 실행 파일 이름
TARGET = power

# 실행 파일 빌드 규칙
$(TARGET): $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

# main.cpp → main.o
main.o: main.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c main.cpp

# mylib.cpp → mylib.o
mylib.o: mylib.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c mylib.cpp

# clean 규칙
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)
