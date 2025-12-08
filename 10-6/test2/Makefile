# **********************************************
# 제 목 : 10-6_2차원배열
# 날 짜 : 2025년 12월8일
# 작성자 : 2001485 김선우
# **********************************************
CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall
TARGET = main
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)
