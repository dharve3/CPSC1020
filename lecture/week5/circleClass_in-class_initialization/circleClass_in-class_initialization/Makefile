CXX = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Circle.cpp
	$(CXX) $(OPTIONS) main.cpp Circle.cpp -o $(PROGRAM) 

clean:
	rm -f $(PROGRAM)

