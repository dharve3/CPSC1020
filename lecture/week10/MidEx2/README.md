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