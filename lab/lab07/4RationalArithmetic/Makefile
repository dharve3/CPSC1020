COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Rational.cpp
	$(COMPILER) $(OPTIONS) main.cpp Rational.cpp -o $(PROGRAM)

clean:
	rm *.out