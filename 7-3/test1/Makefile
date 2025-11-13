// **********************************************
// 제 목 : 7-3(실습 과제 1)-Makefile
// 날 짜 : 2025년 11월6일
// 작성자 : 2001485 김선우
// **********************************************
CX = g++
CXFLAGS = -g -Wall
OBJS = main.o mylib.o
TARGET = complex

$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

main.o : main.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c main.cpp

mylib.o : mylib.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c mylib.cpp

.PHONY: clean
clean:
	rm $(TARGET) $(OBJS)