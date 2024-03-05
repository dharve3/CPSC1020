COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp QA.cpp printResult.cpp
	$(COMPILER) $(OPTIONS) main.cpp QA.cpp printResult.cpp -o $(PROGRAM)

clean:
	rm *.out