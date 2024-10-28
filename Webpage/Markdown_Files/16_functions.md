## Overview
Demonstrates different types of functions in C++ and their usage.

## Key Points

1. **Functions with no return type and no parameters**:
   - **Example**:
     ```cpp
     void greet() {
         cout << "Hello, World!" << endl;
     }
     ```

2. **Functions with return type and no parameters**:
   - **Example**:
     ```cpp
     int getNumber() {
         return 42;
     }
     ```

3. **Functions with parameters and no return type**:
   - **Example**:
     ```cpp
     void printSum(int a, int b) {
         cout << "Sum: " << a + b << endl;
     }
     ```

4. **Functions with parameters and return type**:
   - **Example**:
     ```cpp
     int multiply(int a, int b) {
         return a * b;
     }
     ```

5. **Template functions**:
   - **Example**:
     ```cpp
     template <typename T>
     T add(T a, T b) {
         return a + b;
     }
     ```

6. **Functions that take `std::function` as a parameter**:
   - **Example**:
     ```cpp
     void executeFunction(const std::function<void()>& func) {
         func();
     }
     ```

## Example Code

```cpp
#include <iostream>
#include <functional>
using namespace std;

/**
 * @file functions.cpp
 * @brief Demonstrates different types of functions in C++ and their usage.
 *
 * This file contains examples of various types of functions in C++:
 * - Functions with no return type and no parameters
 * - Functions with return type and no parameters
 * - Functions with parameters and no return type
 * - Functions with parameters and return type
 * - Template functions
 * - Functions that take std::function as a parameter
 *
 * The main function demonstrates how to call these functions.
 *
 * Functions:
 * - void greet(): Prints a greeting message to the console.
 * - int getNumber(): Returns a fixed integer value.
 * - void printSum(int a, int b): Prints the sum of two integers.
 * - int multiply(int a, int b): Returns the product of two integers.
 * - template <typename T> T add(T a, T b): Returns the sum of two values of type T.
 * - void executeFunction(const std::function<void()>& func): Executes a function passed as a std::function parameter.
 *
 * Best Practices and Performance Improvements:
 * - Prefer using [`const`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F16_functions.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A20%2C%22character%22%3A26%7D%7D%5D%2C%22559b11b5-d12a-4087-b08a-6a54a0dee367%22%5D "Go to definition") references for parameters that are not modified within the function to avoid unnecessary copying.
 * - Use inline functions for small, frequently called functions to reduce function call overhead.
 * - Consider using [`constexpr`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F16_functions.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A25%2C%22character%22%3A21%7D%7D%5D%2C%22559b11b5-d12a-4087-b08a-6a54a0dee367%22%5D "Go to definition") for functions that can be evaluated at compile time to improve performance.
 * - Ensure functions have meaningful names and comments to improve code readability and maintainability.
 * - Avoid using [`using namespace std;`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F16_functions.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A32%2C%22character%22%3A16%7D%7D%5D%2C%22559b11b5-d12a-4087-b08a-6a54a0dee367%22%5D "Go to definition") in header files or global scope to prevent namespace pollution.
 */

// Function with no return type and no parameters
void greet() {
    cout << "Hello, World!" << endl;
}

// Function with return type and no parameters
int getNumber() {
    return 42;
}

// Function with parameters and no return type
void printSum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

// Function with parameters and return type
int multiply(int a, int b) {
    return a * b;
}

// Template function to demonstrate the use of templates
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Function that takes std::function as a parameter
void executeFunction(const std::function<void()>& func) {
    func();
}

// Main function to demonstrate the usage of above functions
int main() {
    // Calling function with no return type and no parameters
    greet();

    // Calling function with return type and no parameters
    int number = getNumber();
    cout << "Number: " << number << endl;

    // Calling function with parameters and no return type
    printSum(5, 7);

    // Calling function with parameters and return type
    int product = multiply(4, 6);
    cout << "Product: " << product << endl;

    // Using template function
    cout << "Template Add: " << add(3, 4) << endl;
    cout << "Template Add: " << add(2.5, 3.5) << endl;

    // Using std::function to pass a lambda
    executeFunction([]() {
        cout << "Lambda function executed!" << endl;
    });

    return 0;
}