// demonstrates how pointers work with class inheritance

// RULE: Objects of derived class can be used whereever objects of a base class object are expected

// stated in terms of pointers to Objects
// 1. a derived class pointer can always be assigned to a base class pointer
// this means a base class pointer can point to derived class Objects
//
// 2. a type cast is required to perform the opposite assignment of a base class pointer to a derived class pointer
// this means an error may result at run time if the base class pointer does not actually point to a derived class object

#include <iostream>
using namespace std;

class Base {
public:
	int i;
	Base(int k) {i = k;}
};
class Derived : public Base {
public:
	double d;
	Derived(int k, double g) : Base(k) {d = g;}
};

int main() {
	// raw pointers
	Base *raw_pb = new Base(5);
	Derived *raw_pd = new Derived(6, 10.5);

	// smart pointers
	shared_ptr<Base> pb = make_shared<Base>(5);
	shared_ptr<Derived> pd = make_shared<Derived>(6, 10.5);

	// following rule 1
	// raw pointers
	Base *raw_pb1 = raw_pd;
	Base *raw_pb2 = new Derived(7, 11.5);
	// smart pointers
	shared_ptr<Base> pb1 = pd;
	shared_ptr<Base> pb2 = make_shared<Derived>(7, 11.5);

  // rule 2
	Derived *raw_pd1 = static_cast<Derived *>(raw_pb1);
	shared_ptr<Derived> pd1 = static_pointer_cast<Derived>(pb1);

	cout << raw_pd1->d << endl;
	cout << pd1->d << endl;

	raw_pd = static_cast<Derived *>(raw_pb);
	pd = static_pointer_cast<Derived>(pb);

// textbook says this will cause run time error - let's see
	cout << raw_pd->d << endl;
	cout << pd->d << endl;

}
