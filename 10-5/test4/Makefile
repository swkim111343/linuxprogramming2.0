# **********************************************
# 제 목 : 10-5_2차원 배열
# 날 짜 : 2025년 12월 1일
# 작성자 : 2001485 김선우
# **********************************************
CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = program

all: $(TARGET)

$(TARGET): main.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f *.o $(TARGET)
