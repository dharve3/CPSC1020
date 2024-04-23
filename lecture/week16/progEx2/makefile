COMPILER = g++
OPTIONS = -Wall
PROGRAM = a.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp stats.cpp
	$(COMPILER) $(OPTIONS) main.cpp stats.cpp -o $(PROGRAM)

clean:
	rm *.out