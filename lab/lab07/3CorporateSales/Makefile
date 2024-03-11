COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp DivSales.cpp
	$(COMPILER) $(OPTIONS) main.cpp DivSales.cpp -o $(PROGRAM)

clean:
	rm *.out