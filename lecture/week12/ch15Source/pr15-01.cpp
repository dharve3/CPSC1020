// This program demonstrates type compatibility within
// an inheritance hierarchy.

// demonstrates how pointers work with class inheritance

// RULE: Objects of derived class can be used whereever objects of a base class object are expected

// stated in terms of pointers to Objects
// 1. a derived class pointer can always be assigned to a base class pointer
// this means a base class pointer can point to derived class Objects
//
// 2. a type cast is required to perform the opposite assignment of a base class pointer to a derived class pointer
// this means an error may result at run time if the base class pointer does not actually point to a derived class object

#include "inheritance_novm.h"
#include <iostream>
using namespace std;

int main()
{
    shared_ptr<Person> pp;
    shared_ptr<Faculty> pf;
    shared_ptr<TFaculty> ptf;
    ptf = make_shared<TFaculty>("Indiana Jones", Discipline::ARCHEOLOGY, "Dr.");

    // Calling getName through a pointer to TFaculty uses
    // the version of getName in TFaculty
    cout << "Get name through a pointer to TFaculty: ";
    cout << ptf->getName() << endl;

    // Assignment of derived to base needs no cast
    pf = ptf;

    // Calling getName through a pointer to Faculty uses the
    // version of getName in Faculty
    cout << "Get name through a pointer to Faculty: ";
    cout << pf->getName() << endl;

    // Assignment of derived to base needs no cast
    pp = ptf;

    // Derived class members can be accessed using a cast
    cout << "Get name through a cast to pointer to TFaculty: ";
    cout << static_pointer_cast<TFaculty> (pp)->getName() << endl;

    // Assigment from base to derived needs a cast
    shared_ptr<TFaculty> ptf1;
    ptf1 =  static_pointer_cast<TFaculty>(pp);

    // Access getName through a pointer to TFaculty
    cout << "Get name through a pointer to TFaculty: ";
    cout << ptf1->getName();

    cout << endl;
    return 0;
}
