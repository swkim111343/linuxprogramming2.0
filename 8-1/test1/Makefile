#**********************************************
#제 목 : cpp 8-1
#날 짜 : 2025년 11월13일
#작성자 : 2001485 김선우
#**********************************************
# 컴파일러 설정
CXX = g++
CXXFLAGS = -g -Wall

# 객체 파일 및 실행 파일 이름 지정
OBJS = main.o mylib.o
TARGET = shape

# 실행 파일 생성 규칙
$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

# main.cpp 컴파일
main.o: main.cpp mylib.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# mylib.cpp 컴파일
mylib.o: mylib.cpp mylib.hpp
	$(CXX) $(CXXFLAGS) -c mylib.cpp

# 빌드 파일 정리
clean:
	rm -f $(OBJS) $(TARGET)
