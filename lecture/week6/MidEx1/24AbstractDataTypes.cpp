// Example of ADT can be a Queue, Stack, etc.

// Stack Example
//  Abstract behavior: Last In, First Out (LIFO) data structure.
//  Operations: push, pop, top, isEmpty, isFull.
#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    while (!myStack.empty()) {
        std::cout << "Top element: " << myStack.top() << std::endl;
        myStack.pop();
    }

    return 0;
}

// Queue Example
//  Abstract behavior: First In, First Out (FIFO) data structure.
//  Operations: enqueue, dequeue, front, isEmpty, isFull.
#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    while (!myQueue.empty()) {
        std::cout << "Front element: " << myQueue.front() << std::endl;
        myQueue.pop();
    }

    return 0;
}


// List Example
//  Abstract behavior: Linear collection of elements.
//  Operations: insert, remove, get, size, isEmpty.
#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    for (const auto& element : myList) {
        std::cout << "Element: " << element << std::endl;
    }

    return 0;
}

// Tree
//  Abstract behavior: Hierarchical structure consisting of nodes.
//  Operations: insert, remove, search, traverse.


// Graph
//  Abstract behavior: Collection of vertices connected by edges.
//  Operations: addVertex, removeVertex, addEdge, removeEdge, getNeighbors.


// Set Example
//  Abstract behavior: Collection of unique elements with no particular order.
//  Operations: insert, remove, contains, size, union, intersection, difference.
#include <iostream>
#include <set>

int main() {
    std::set<int> mySet;

    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);

    for (const auto& element : mySet) {
        std::cout << "Element: " << element << std::endl;
    }

    return 0;
}

// Map (Dictonary) Example
//  Abstract behavior: Collection of key-value pairs.
//  Operations: insert, remove, get, containsKey, size.
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> myMap;

    myMap["one"] = 1;
    myMap["two"] = 2;
    myMap["three"] = 3;

    for (const auto& pair : myMap) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    return 0;
}
