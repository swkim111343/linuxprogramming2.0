//**********************************************
//제 목 : c++7장-4(실습 과제 2)    
//날 짜 : 2025년11월10일
//작성자 : 2001485김선우
// **********************************************
CX = g++
CXFLAGS = -g -Wall
OBJS = main.o mylib.o
TARGET = complex

$(TARGET): $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

main.o: main.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c main.cpp

mylib.o: mylib.cpp mylib.hpp
	$(CX) $(CXFLAGS) -c mylib.cpp

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)
