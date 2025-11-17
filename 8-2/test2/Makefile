# **********************************************
# 제 목 : 8-2
# 날 짜 : 2025년 11월17일
# 작성자 : 2001485 김선우
# **********************************************
# 컴파일러
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# 타겟 파일
TARGET = main

# 오브젝트 파일
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
