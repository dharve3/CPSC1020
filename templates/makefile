COMPILER = g++
OPTIONS = -Wall
PROGRAM = programName.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): fileHere.cpp otherFileHere.cpp
	$(COMPILER) $(OPTIONS) fileHere.cpp otherFileHere.cpp -o $(PROGRAM)

clean:
	rm *.out