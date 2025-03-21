CXX = g++
CXXFLAGS = -Wall -std=c++11

SRCS = main.cpp firstscreen.cpp selectionpage.cpp transaction.cpp area_calculator.cpp prime_factor.cpp circumference.cpp factorial.cpp inch_calculator.cpp radical_calculator.cpp square_meter.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = calculator

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp calculator.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean