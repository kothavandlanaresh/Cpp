## Overview
Demonstrates the difference between compile-time and runtime calculations in C++ using factorial examples.

## Key Points

- 📝 **Compile-time Calculation**: Uses `constexpr` to evaluate the factorial function at compile-time.
  - **Example**:
    ```cpp
    constexpr int factorial(int n) {
        return (n <= 1) ? 1 : (n * factorial(n - 1));
    }
    ```

- 📝 **Runtime Calculation**: Uses a loop to evaluate the factorial function at runtime.
  - **Example**:
    ```cpp
    int factorial_runtime(int n) {
        int result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
    ```

## Example Code

```cpp
#include <iostream>
#include <array>

/**
 * @file 03_compiletime_and_runtime.cpp
 * @brief Demonstrates the difference between compile-time and runtime calculations in C++ using factorial examples.
 *
 * This file contains examples of:
 * - Compile-time calculation: Factorial calculation using [`constexpr`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F03_compiletime_and%20_runtime.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A3%2C%22character%22%3A53%7D%7D%5D%2C%227471cc69-6f4e-4b69-ac5e-38f4d7d2b432%22%5D "Go to definition").
 * - Runtime calculation: Factorial calculation using a loop.
 *
 * The main function showcases:
 * - The use of a [`constexpr`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F03_compiletime_and%20_runtime.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A3%2C%22character%22%3A53%7D%7D%5D%2C%227471cc69-6f4e-4b69-ac5e-38f4d7d2b432%22%5D "Go to definition") function to calculate the factorial at compile-time.
 * - The use of a loop to calculate the factorial at runtime.
 *
 * @date 2023-10-05
 */

// Compile-time example: Factorial calculation using constexpr
constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

// Runtime example: Factorial calculation using a loop
int factorial_runtime(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    // Compile-time calculation
    // The factorial function is evaluated at compile-time because it is marked with constexpr.
    // This means the result is computed during compilation, leading to potential performance benefits.
    constexpr int compile_time_factorial = factorial(5);
    std::cout << "Compile-time factorial of 5: " << compile_time_factorial << std::endl;

    // Runtime calculation
    // The factorial_runtime function is evaluated at runtime using a loop.
    // It is not marked with constexpr, so it is computed during the execution of the program.
    int runtime_factorial = factorial_runtime(5);
    std::cout << "Runtime factorial of 5: " << runtime_factorial << std::endl;

    return 0;
}