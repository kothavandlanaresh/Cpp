## Overview
Demonstrates the use of raw arrays in C++ and prints their elements, along with modern alternatives like `std::array`, `std::vector`, and smart pointers.

## Key Points

- 📝 **Raw Arrays**: Basic feature of C++ with several limitations.
  - **Example**:
    ```cpp
    int myArray[5] = {1, 2, 3, 4, 5};
    ```

- 📝 **Fixed Size**: The size of a raw array must be known at compile time and cannot be changed dynamically.
  - **Example**:
    ```cpp
    int myArray[5];
    ```

- 📝 **No Bounds Checking**: Accessing elements outside the bounds of the array can lead to undefined behavior.
  - **Example**:
    ```cpp
    int myArray[5];
    myArray[10] = 100; // Undefined behavior
    ```

- 📝 **Manual Memory Management**: When using dynamic arrays, the programmer is responsible for deallocating the memory.
  - **Example**:
    ```cpp
    int* myArray = new int[5];
    delete[] myArray;
    ```

- 📝 **Modern Alternatives**: `std::array`, `std::vector`, `std::unique_ptr`, and `std::shared_ptr` provide safer and more maintainable code.
  - **Examples**:
    ```cpp
    std::array<int, 5> stdArray = {1, 2, 3, 4, 5};
    std::vector<int> stdVector = {1, 2, 3, 4, 5};
    std::unique_ptr<int[]> uniquePtrArray(new int[5]{1, 2, 3, 4, 5});
    ```

## Example Code

```cpp
#include <iostream>
#include <array>
#include <vector>
#include <memory>

/**
 * @file [13_raw_arrays.cpp](http://_vscodecontentref_/#%7B%22uri%22%3A%7B%22%24mid%22%3A1%2C%22fsPath%22%3A%22c%3A%5C%5CUsers%5C%5Ck6ros%5C%5CDocuments%5C%5CGitHub%5C%5CCPP%5C%5CCPP_Notes%5C%5C13_raw_arrays.cpp%22%2C%22_sep%22%3A1%2C%22external%22%3A%22file%3A%2F%2F%2Fc%253A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F13_raw_arrays.cpp%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F13_raw_arrays.cpp%22%2C%22scheme%22%3A%22file%22%7D%7D)
 * @brief Demonstrates the use of raw arrays in C++ and prints their elements.
 *
 * This example shows how to define and use a raw array in C++. Raw arrays are 
 * a basic feature of the C++ language, but they come with several limitations 
 * and potential pitfalls:
 * 
 * - **Fixed Size**: The size of a raw array must be known at compile time and 
 *   cannot be changed dynamically.
 * - **No Bounds Checking**: Accessing elements outside the bounds of the array 
 *   can lead to undefined behavior, which can cause crashes or security vulnerabilities.
 * - **Manual Memory Management**: When using dynamic arrays (allocated with [`new`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F13_raw_arrays.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A12%2C%22character%22%3A78%7D%7D%5D%2C%22f473dd38-8f6b-4e34-8bec-ee9704e52f5e%22%5D "Go to definition")), 
 *   the programmer is responsible for deallocating the memory using [`delete`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F13_raw_arrays.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A13%2C%22character%22%3A70%7D%7D%5D%2C%22f473dd38-8f6b-4e34-8bec-ee9704e52f5e%22%5D "Go to definition"), 
 *   which can lead to memory leaks if not handled correctly.
 * 
 * Modern C++ provides several alternatives that address these issues:
 * 
 * - **std::array**: A fixed-size array that provides bounds checking in debug mode 
 *   and integrates well with the C++ Standard Library.
 * - **std::vector**: A dynamic array that can grow or shrink in size as needed, 
 *   automatically manages memory, and provides bounds checking.
 * - **std::unique_ptr** and **std::shared_ptr**: Smart pointers that manage the 
 *   lifetime of dynamically allocated objects, reducing the risk of memory leaks 
 *   and dangling pointers.
 * 
 * Using these modern features can lead to safer and more maintainable code.
 */

// Function to print elements of an std::array
template <std::size_t N>
void printStdArray(const std::array<int, N>& arr) {
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Function to print elements of an std::vector
void printVector(const std::vector<int>& vec) {
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Using std::array
    std::array<int, 5> stdArray = {1, 2, 3, 4, 5};
    std::cout << "Elements of std::array: ";
    printStdArray(stdArray);

    // Using std::vector
    std::vector<int> stdVector = {1, 2, 3, 4, 5};
    std::cout << "Elements of std::vector: ";
    printVector(stdVector);

    // Using std::unique_ptr for dynamic array
    std::unique_ptr<int[]> uniquePtrArray(new int[5]{1, 2, 3, 4, 5});
    std::cout << "Elements of std::unique_ptr array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << uniquePtrArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Function to print elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Define a raw array with 5 elements
    int myArray[5] = {1, 2, 3, 4, 5};

    // Get the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Print the elements of the array
    std::cout << "Elements of the array: ";
    printArray(myArray, size);

    return 0;
}