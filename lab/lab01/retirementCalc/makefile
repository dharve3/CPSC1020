COMPILER = g++
OPTIONS = -Wall
PROGRAM = retirementCalc.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): retirementCalc.cpp compoundCalc.cpp
	$(COMPILER) $(OPTIONS) retirementCalc.cpp compoundCalc.cpp -o $(PROGRAM)

clean:
	rm *.out