# **********************************************
# 제 목 : 8-2
# 날 짜 : 2025년 11월17일
# 작성자 : 2001485 김선우
# **********************************************
# Makefile - Shape 프로젝트 빌드 스크립트

CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = shape
OBJS = main.o mylib.o

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp mylib.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

mylib.o: mylib.cpp mylib.hpp
	$(CXX) $(CXXFLAGS) -c mylib.cpp

clean:
	rm -f *.o $(TARGET)
