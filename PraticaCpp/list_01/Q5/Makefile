CXX = g++
CXXFLAGS = -Wall -g
LDFLAGS =

SRCS = main.cpp fatorial.cpp primalidade.cpp
OBJS = $(subst .cpp,.o,$(SRCS))
EXEC = Q5

.PHONY: clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)