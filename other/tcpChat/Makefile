COMPILER = g++
OPTIONS = -Wall -pthread
PROGRAM = tcpChat.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): tcpChat.cpp
	$(COMPILER) $(OPTIONS) tcpChat.cpp -o $(PROGRAM)

clean:
	rm *.out