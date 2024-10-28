## Overview
Demonstrates various types of object initialization in C++.

## Key Points

- **Direct Initialization**:
  - 📋 Directly calls the constructor of `MyClass` with the argument.
  - **Example**:
    ```cpp
    MyClass obj1(99);
    ```

- **Copy Initialization**:
  - 📋 Looks like an assignment but calls the constructor of `MyClass` with the argument.
  - **Example**:
    ```cpp
    MyClass obj2 = 99;
    ```

- **Uniform Initialization (Brace Initialization)**:
  - 📋 Uses braces `{}` to initialize the object. It is part of the C++11 standard and later.
  - **Example**:
    ```cpp
    MyClass obj3{99};
    ```

- **Default Initialization**:
  - 📋 Calls the default constructor of `MyClass`.
  - **Example**:
    ```cpp
    MyClass obj4;
    ```

## Example Code

```cpp
#include <iostream>

/**
 * @file 02_ClassObjecInitilisation.cpp
 * @brief Demonstrates various types of object initialization in C++.
 *
 * This file contains a class [`MyClass`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F02_Class_Objec_Initilisation.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A4%2C%22character%22%3A31%7D%7D%5D%2C%2250c07ae0-8fcd-4f64-8924-a6a33245f97c%22%5D "Go to definition") with both a parameterized constructor and a default constructor.
 * It showcases different ways to initialize objects of this class in the [`main`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F02_Class_Objec_Initilisation.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A5%2C%22character%22%3A75%7D%7D%5D%2C%2250c07ae0-8fcd-4f64-8924-a6a33245f97c%22%5D "Go to definition") function.
 *
 * The following types of initialization are demonstrated:
 *
 * ### Direct Initialization
 * ```cpp
 * MyClass obj1(99);
 * ```
 * Directly calls the constructor of `MyClass` with the argument `99`.
 * This is often used when you want to pass arguments to the constructor.
 *
 * ### Copy Initialization
 * ```cpp
 * MyClass obj2 = 99;
 * ```
 * Looks like an assignment but calls the constructor of `MyClass` with the argument `99`.
 * This can be less efficient because it might involve an extra copy or move operation, depending on the compiler optimizations.
 *
 * ### Uniform Initialization (Brace Initialization)
 * ```cpp
 * MyClass obj3{99};
 * ```
 * Uses braces `{}` to initialize the object. It is part of the C++11 standard and later.
 * This is preferred in modern C++ because it avoids the "most vexing parse" problem and can also be used to initialize member variables directly.
 *
 * ### Default Initialization
 * ```cpp
 * MyClass obj4;
 * ```
 * Calls the default constructor of `MyClass`. If no default constructor is defined, this will result in a compilation error.
 * This is used when you don't need to pass any arguments to the constructor.
 *
 * ### Summary
 * - **Direct Initialization**: `MyClass obj1(99);` - Directly calls the constructor with arguments.
 * - **Copy Initialization**: `MyClass obj2 = 99;` - Looks like assignment but calls the constructor.
 * - **Uniform Initialization**: `MyClass obj3{99};` - Uses braces, avoids parsing issues, and is preferred in modern C++.
 * - **Default Initialization**: `MyClass obj4;` - Calls the default constructor.
 *
 * Each type of initialization has its use cases and can be chosen based on the specific requirements of your code.
 */
#include <iostream>

class MyClass {
public:
    // Constructor with an integer parameter
    MyClass(int value) : value(value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }

    // Default constructor
    MyClass() : value(0) {
        std::cout << "Default constructor called" << std::endl;
    }

    // Method to display the value
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main() {
    // Direct Initialization
    MyClass obj1(99);
    obj1.display();

    // Copy Initialization
    MyClass obj2 = 99;
    obj2.display();

    // Uniform Initialization (Brace Initialization)
    MyClass obj3{99};
    obj3.display();

    // Default Initialization
    MyClass obj4;
    obj4.display();

    return 0;
}