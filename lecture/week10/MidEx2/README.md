# MidEx1
This directory contains code examples for the provided study guide for MidEx2!
Covers chapters 7, 8, 10 and part of 11

## A list of descriptions for each item:
1. **Constructors:** Constructors are special member functions of a class used for initializing objects. They have the same name as the class and are invoked automatically when an object is created. They have no return type.
2. **Destructors:** Destructros are special member functions of a class used for cleaning up resources before an object is destroyed. They have the same name as the class prefixed with a tilde (~) and are invoked automatically when an object goes out of scope or is explicitly deleted. Also, no return type.
3. **Enumerators:** Enumerators are a way to create named constants in C++. They allow you to define a set of named integer constants.
4. **Structs vs classes:** In C++, structs and classes are nearly identical. The only difference is that members of a struct default to public access, while members of a class default to private access.
5. **Const variables:** Const variables are variables whose value cannot be changed after initialization.
6. **Const functions:** Const functions are member functions of a class that promise not to modify the state of the object.
7. **Arrays:** Arrays are a collection of elements of the same type stored in contiguous memory locations.
8. **Vectors:** Vectors are dynamic arrays that can resize themselves automatically when elements are added or removed.
9. **Pointers:** Pointers are variables that store memory addresses.
10. **Dynamic memory allocation (new) and deallocation (delete):** Dynamic memory allocation allows you to allocate memory at runtime using the new keyword. Deallocation is done using the delete keyword to release the memory when it's no longer needed.
11. **Dangling pointers:** Dangling pointers are pointers that point to a memory location that has been deallocated, leading to undefined behavior if accessed. (Bad)
12. **Memory leaks:** Memory leaks occur when memory that is dynamically allocated is not deallocated properly, leading to a loss of available memory over time. (Even worse)
13. **Smart pointers (C++ 11):** Smart pointers are objects that act like pointers but manage the memory they point to automatically, helping to prevent memory leaks.
14. **Nullptr (C++ 11):** nullptr is a keyword introduced in C++11 that represents a null pointer value.
15. **this:** this is a keyword that refers to the current object instance within a member function.
16. **Class relationships:**
    - **Aggregation:** A weak "has-a" relationship where one object contains another object.
    - **Composition:** A strong "has-a" relationship where one object owns another object's lifetime.
    - **Has-a relationship:** Describes when one object is a part of another object.
    - **Is-a relationship:** Describes inheritance where one class is derived from another.
    - **Nested:** Describes a class declared within another class.
    - **Dependence:** Describes when one class uses another class without ownership or containment.
17. **Friend:** friend is a keyword that grants access to private and protected members of a class to functions or other classes.
18. **Static:** static is a keyword used to declare class-level variables or functions that belong to the class rather than instances of the class.
19. **Lvalue and rvalue:** Lvalue refers to objects that have identifiable memory locations. Rvalue refers to temporary objects that do not have identifiable memory locations.
20. **Copy constructor:** A copy constructor is a special constructor that creates a new object as a copy of an existing object.
21. **Operator overloading:** Operator overloading allows you to define custom behaviors for operators when they are used with user-defined types.
22. **= operator:** The assignment operator = is used to assign a value to a variable or object.
23. **Challenges with objects and dynamic memory (and how to do correctly):** Challenges include memory leaks, dangling pointers, and inefficient memory management. To handle these challenges correctly, use smart pointers, follow RAII (Resource Acquisition Is Initialization) principles, and avoid manual memory management whenever possible.
24. **Evaluate code:** Evaluating code involves analyzing its correctness, efficiency, and adherence to coding standards, as well as identifying potential bugs and performance issues.

## Additions in v2 (*Some of these already mentioned above*)
THINGS TO KNOW!!!
(He made another announcement)
- Know the characteristics of a destructor & constructor
  - Constructors: Special member functions used for initializing objects. They have the same name as the class and are invoked automatically when an object is created.
  - Destructors: Special member functions used for cleaning up resources before an object is destroyed. They have the same name as the class prefixed with a tilde (~) and are invoked automatically when an object goes out of scope or is explicitly deleted.
- Know the benefit of passing const references
  - Passing const references allows you to efficiently pass large objects or data structures to functions without incurring the overhead of copying. Additionally, it ensures that the function does not modify the original object.
- Study enumerated classes
  - Enumerated classes allow you to define a set of named constants that represent a group of related values.
- What is a default constructor
  - A default constructor is a constructor that is automatically generated by the compiler if no constructor is explicitly defined. It initializes the object with default values.
- What is a copy constructor
  - A copy constructor is a special constructor that creates a new object as a copy of an existing object. It is used when objects are passed by value, returned by value, or initialized with another object.
- What is a default copy constructor and when is it not good to depend on it
  - The default copy constructor is generated by the compiler if no copy constructor is explicitly defined. While it provides a shallow copy of the object, it may not work correctly for classes with dynamic memory allocation or complex data members.
- What is memberwise assignment and when is it not good
  - Memberwise assignment refers to the assignment of each member of one object to the corresponding member of another object. It may not be good for classes with dynamically allocated memory or resources that need proper cleanup.
- Know where to specify a function or another class is friend
  - The `friend` keyword is used to grant access to private and protected members of a class to functions or other classes.
- How many copies of a static variable will you have if you create 100 objects
  - If a static variable is declared in a class, there will be only one copy of that variable shared among all instances of the class.
- What happens when you have a const parameter
  - A const parameter indicates that the parameter value cannot be modified within the function.
- What is a const method
  - A const method is a member function of a class that promises not to modify the state of the object.
- Know how to initialize array elements using { }
  - Array elements can be initialized using brace-initialization syntax `{}`.
- What's the key difference between arrays and vectors
  - Arrays have a fixed size determined at compile time, while vectors are dynamic arrays that can resize themselves at runtime.
- Know how the range-based for loop works
  - The range-based for loop allows iteration over elements of a container, such as arrays, vectors, or other iterable objects.
- Know which variables go on the stack and which ones on the heap
  - Variables declared inside functions or as function parameters typically go on the stack, while dynamically allocated variables using `new` go on the heap.
- What is a dangling pointer and how do you get one and how do you avoid them
  - A dangling pointer is a pointer that points to a memory location that has been deallocated. To avoid them, ensure that pointers are properly managed and not used after deallocation.
- What is nullptr (C++11)
  - `nullptr` is a keyword introduced in C++11 that represents a null pointer value. It provides type safety compared to using `NULL` or `0`.
- What is a smart pointer
  - Smart pointers are objects that act like pointers but manage the memory they point to automatically, helping to prevent memory leaks.
- What is dynamic memory allocation
  - Dynamic memory allocation allows you to allocate memory at runtime using the `new` keyword. It is used when the size of memory needed is not known at compile time.
- Know what an rvalue and lvalue are
  - An lvalue refers to an object that has a memory address and can appear on the left side of an assignment, while an rvalue refers to a temporary object that does not have a memory address and can only appear on the right side of an assignment.
- Know the terms mutator and accessor methods
  - Mutator methods (or setters) are used to modify the state of an object's data members, while accessor methods (or getters) are used to retrieve the values of data members.
- Know what typedef does (google it)
  - The `typedef` keyword is used to create an alias or synonym for a data type.
- What is pass by reference
  - Passing by reference allows a function to modify the original value of a variable passed to it. It is more efficient than passing by value for large objects.
- What is pointer arithmetic and how to do it
  - Pointer arithmetic involves performing arithmetic operations on pointers to access different memory locations. It is commonly used in array manipulation and dynamic memory allocation.
