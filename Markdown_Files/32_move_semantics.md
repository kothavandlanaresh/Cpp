# Move Semantics in C++

Demonstrates the use of move semantics in C++, including move constructors and move assignment operators.

## Key Points

1. **Move Constructor**:
   - **Description**: Transfers ownership of resources from one object to another.
   - **Example**:
     ```cpp
     MoveSemanticsExample(MoveSemanticsExample&& other) noexcept {
         data = other.data;
         other.data = nullptr;
         std::cout << "Move Constructor called" << std::endl;
     }
     ```

2. **Move Assignment Operator**:
   - **Description**: Transfers ownership of resources from one object to another during assignment.
   - **Example**:
     ```cpp
     MoveSemanticsExample& operator=(MoveSemanticsExample&& other) noexcept {
         if (this == &other) return *this;
         delete data;
         data = other.data;
         other.data = nullptr;
         std::cout << "Move Assignment Operator called" << std::endl;
         return *this;
     }
     ```

3. **Destructor**:
   - **Description**: Cleans up resources when an object is destroyed.
   - **Example**:
     ```cpp
     ~MoveSemanticsExample() {
         delete data;
         std::cout << "Destructor called" << std::endl;
     }
     ```

4. **Copy Assignment Operator**:
   - **Description**: Copies resources from one object to another during assignment.
   - **Example**:
     ```cpp
     MoveSemanticsExample& operator=(const MoveSemanticsExample& other) {
         if (this == &other) return *this;
         delete data;
         data = new std::string(*other.data);
         std::cout << "Copy Assignment Operator called" << std::endl;
         return *this;
     }
     ```

## Example Code

```cpp
#include <iostream>
#include <string>

class MoveSemanticsExample {
public:
    std::string* data;

    // Constructor
    MoveSemanticsExample(const std::string& value) {
        data = new std::string(value);
        std::cout << "Constructor called for " << *data << std::endl;
    }

    // Move Constructor
    MoveSemanticsExample(MoveSemanticsExample&& other) noexcept {
        data = other.data;
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