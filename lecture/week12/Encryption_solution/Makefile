OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Encryption.cpp SimpleEncryption.cpp
	$(CXX) $(OPTIONS) main.cpp Encryption.cpp SimpleEncryption.cpp -o $(PROGRAM) 

clean:
	rm -f $(PROGRAM)

