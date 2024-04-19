COMPILER = g++
OPTIONS = -Wall -std=c++17
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Recommend.cpp
	$(COMPILER) $(OPTIONS) main.cpp Recommend.cpp -o $(PROGRAM)

clean:
	rm *.out