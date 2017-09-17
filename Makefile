SOURCES = $(wildcard *.cpp)
OBJS := $(SOURCES:%.cpp=%.o)
FLAGS = -std=c++14 -c -O2 -g -Wall -Wextra -Werror -pedantic -pedantic-errors -MMD

.PHONY : all
all : main.exe

main.exe : $(OBJS)
	$(CXX) -o main.exe $(OBJS)

%.o: %.cpp
	$(CXX) -c $(FLAGS) -o $@ $<

.PHONY : clean
clean :
	rm -f *.o main.exe

-include $(OBJS:.o=.d)
