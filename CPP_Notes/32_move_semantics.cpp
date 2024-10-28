/**
 * @file 32_move_semantics.cpp
 * @brief Demonstrates the advantages and disadvantages of move semantics in C++.
 * 
 * This program defines a class `MoveSemanticsExample` that showcases the use of move semantics.
 * It includes constructors, destructors, and assignment operators to illustrate how move semantics
 * can optimize performance by transferring resources instead of copying them.
 * 
 * ## Advantages of Move Semantics
 * - **Performance Improvement**: Move semantics can significantly improve performance by avoiding 
 *   unnecessary deep copies of objects. Instead, resources are transferred from one object to another.
 * - **Resource Management**: It helps in efficient resource management, especially for classes that 
 *   manage dynamic memory or other resources like file handles, sockets, etc.
 * 
 * ## Disadvantages of Move Semantics
 * - **Complexity**: Implementing move semantics can add complexity to the code. Developers need to 
 *   ensure that moved-from objects are left in a valid but unspecified state.
 * - **Potential Errors**: If not handled properly, move semantics can lead to potential errors such as 
 *   double deletion, accessing moved-from objects, or resource leaks.
 * 
 * ## Proper Usage
 * - Always ensure that moved-from objects are left in a valid state.
 * - Use `std::move` to explicitly indicate that an object can be moved.
 * - Implement both move constructor and move assignment operator to fully support move semantics.
 * 
 * ## Potential Errors to Avoid
 * - **Double Deletion**: Ensure that the destructor does not delete resources that have already been 
 *   moved.
 * - **Accessing Moved-From Objects**: Avoid accessing objects that have been moved from, as their 
 *   state is unspecified.
 * - **Resource Leaks**: Ensure that resources are properly managed and transferred without leaks.
 * 
 * ## Important Considerations
 * - Defining a destructor, copy constructor, or copy assignment operator will prevent the compiler 
 *   from automatically generating move operations.
 * - Defining move operations will prevent the compiler from automatically generating copy operations.
 * - Explicitly deleting any of these operations will prevent their generation.
 * 
 * The `MoveSemanticsExample` class demonstrates these concepts with appropriate constructors, 
 * destructors, and assignment operators.
 * 
 * @example
 * MoveSemanticsExample obj1("Hello");
 * MoveSemanticsExample obj2 = std::move(obj1); // Move constructor
 * 
 * MoveSemanticsExample obj3("World");
 * obj3 = std::move(obj2); // Move assignment operator
 * 
 * @see https://en.cppreference.com/w/cpp/language/move_constructor
 * @see https://en.cppreference.com/w/cpp/language/move_assignment
 */
#include <iostream>
#include <vector>
#include <string>

class MoveSemanticsExample {
public:
    std::string* data;
    
    // Constructor
    MoveSemanticsExample(const std::string& str) : data(new std::string(str)) {
        std::cout << "Constructor called for " << *data << std::endl;
    }

    // Copy Constructor
    MoveSemanticsExample(const MoveSemanticsExample& other) : data(new std::string(*other.data)) {
        std::cout << "Copy Constructor called for " << *data << std::endl;
    }

    // Move Constructor
    MoveSemanticsExample(MoveSemanticsExample&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move Constructor called" << std::endl;
    }

    // Destructor
    ~MoveSemanticsExample() {
        delete data;
        std::cout << "Destructor called" << std::endl;
    }

    // Copy Assignment Operator
    MoveSemanticsExample& operator=(const MoveSemanticsExample& other) {
        if (this == &other) return *this;
        delete data;
        data = new std::string(*other.data);
        std::cout << "Copy Assignment Operator called" << std::endl;
        return *this;
    }

    // Move Assignment Operator
    MoveSemanticsExample& operator=(MoveSemanticsExample&& other) noexcept {
        if (this == &other) return *this;
        delete data;
        data = other.data;
        other.data = nullptr;
        std::cout << "Move Assignment Operator called" << std::endl;
        return *this;
    }
};

int main() {
    MoveSemanticsExample obj1("Hello");
    MoveSemanticsExample obj2 = std::move(obj1); // Move constructor

    MoveSemanticsExample obj3("World");
    obj3 = std::move(obj2); // Move assignment operator

    return 0;
}