COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): p11-10.cpp Length.cpp
	$(COMPILER) $(OPTIONS) p11-10.cpp Length.cpp -o $(PROGRAM)

clean:
	rm *.out