COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Recommend.cpp
	$(COMPILER) $(OPTIONS) main.cpp Recommend.cpp -o $(PROGRAM)

clean:
	rm *.out