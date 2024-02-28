COMPILER = g++
OPTIONS = -Wall -std=c++17
PROGRAM = parkingPermit.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.o Customers.o Vehicles.o Invoice.o
	$(COMPILER) $(OPTIONS) main.o Customers.o Vehicles.o Invoice.o -o $(PROGRAM)

main.o: main.cpp
	$(COMPILER) $(OPTIONS) -c main.cpp -o main.o

Customers.o: Customers.cpp Customers.h
	$(COMPILER) $(OPTIONS) -c Customers.cpp -o Customers.o

Vehicles.o: Vehicles.cpp Vehicles.h
	$(COMPILER) $(OPTIONS) -c Vehicles.cpp -o Vehicles.o

Invoice.o: Invoice.cpp Invoice.h
	$(COMPILER) $(OPTIONS) -c Invoice.cpp -o Invoice.o

clean:
	rm -f *.o $(PROGRAM)
