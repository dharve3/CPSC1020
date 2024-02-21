COMPILER = g++
OPTIONS = -Wall
PROGRAM = parkingPermit.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Visitors.cpp Students.cpp Employees.cpp Regular.cpp Motorcycles.cpp LowEmissions.cpp Invoice.cpp
	$(COMPILER) $(OPTIONS) main.cpp Visitors.cpp Students.cpp Employees.cpp Regular.cpp Motorcycles.cpp LowEmissions.cpp Invoice.cpp -o $(PROGRAM)

clean:
	rm *.out