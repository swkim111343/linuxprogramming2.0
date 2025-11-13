// **********************************************
// 제 목 : 7-3(실습 과제 2)-Makefile
// 날 짜 : 2025년 11월 6일
// 작성자 : 2001485 김선우
// **********************************************
CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = main
OBJS = main.o mylib.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp mylib.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

mylib.o: mylib.cpp mylib.hpp
	$(CXX) $(CXXFLAGS) -c mylib.cpp

clean:
	rm -f $(TARGET) *.o
