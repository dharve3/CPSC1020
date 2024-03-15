// Class Relationships

#include <iostream>

class Room {
public:
    Room() {
        std::cout << "Room constructor called\n";
    }

    ~Room() {
        std::cout << "Room destructor called\n";
    }
};

class House {
private:
    Room* room;
public:
    House() {
        room = new Room();
    }

    ~House() {
        delete room;
    }
};

class Engine {};

// Car with has-a relationship with Engine
class CarWithEngine {
private:
    Engine engine;
};

// Car with aggregation relationship with Room
class CarWithRoom {
private:
    Room room;
};

// Car with composition relationship with Room
class CarWithRoomComposition {
private:
    Room* room;
public:
    CarWithRoomComposition() {
        room = new Room();
    }

    ~CarWithRoomComposition() {
        delete room;
    }
};

int main() {
    House house; // House constructor called, Room constructor called
    CarWithEngine car1; // No constructor called for Engine (default constructor)
    CarWithRoom car2; // Room constructor called
    CarWithRoomComposition car3; // Room constructor called

    return 0;
}
