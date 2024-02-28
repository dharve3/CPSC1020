COMPILER = g++
OPTIONS = -Wall -std=c++17
PROGRAM = parkingPermit.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Customers.cpp Vehicles.cpp Invoice.cpp
	$(COMPILER) $(OPTIONS) main.cpp Customers.cpp Vehicles.cpp Invoice.cpp -o $(PROGRAM)

clean:
	rm *.out
