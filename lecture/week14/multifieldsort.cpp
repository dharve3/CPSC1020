/* Sure, here's a C++ program that sorts data on two fields using the `std::sort` function from the `<algorithm>` header:

In this program, we define a `Person` struct which has a `name` and an `age` field. We then define a comparison function `compareByAgeThenName` that returns `true` if the first `Person` object should come before the second `Person` object in the sorted sequence. The comparison function checks the age of the two `Person` objects first, and if they are equal, it then checks the names.

We then create a `std::vector` of `Person` objects, initialize it with some data, and sort it using the `std::sort` function and the `compareByAgeThenName` comparison function.

Finally, we print out the sorted data to the console.
*/
#include <iostream>
#include <algorithm>
#include <vector>

struct Person {
    std::string name;
    int age;
};

bool compareByAgeThenName(const Person& a, const Person& b) {
    if (a.age == b.age) {
        return a.name < b.name;
    } else {
        return a.age < b.age;
    }
}

int main() {
    std::vector<Person> people = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 20},
        {"David", 25},
        {"Eve", 20}
    };

    std::sort(people.begin(), people.end(), compareByAgeThenName);

    // print sorted data
    for (const auto& person : people) {
        std::cout << person.name << ", " << person.age << std::endl;
    }

    return 0;
}
