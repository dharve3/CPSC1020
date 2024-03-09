COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): pr11-10.cpp Length.cpp
	$(COMPILER) $(OPTIONS) pr11-10.cpp Length.cpp -o $(PROGRAM)

clean:
	rm *.out