COMPILER = g++
OPTIONS = -Wall
PROGRAM = tcpChatRoom.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): tcpChatRoom.cpp
	$(COMPILER) $(OPTIONS) tcpChatRoom.cpp -o $(PROGRAM)

clean:
	rm *.out