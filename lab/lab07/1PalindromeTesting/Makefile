COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Pstring.cpp
	$(COMPILER) $(OPTIONS) main.cpp Pstring.cpp -o $(PROGRAM)

clean:
	rm *.out