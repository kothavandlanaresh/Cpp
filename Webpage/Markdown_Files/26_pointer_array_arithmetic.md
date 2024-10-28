## Overview
Demonstrates various methods to print array elements using pointers and array indexing in C++.

## Key Points

1. **Pointer Arithmetic**:
   - **Description**: Accesses array elements by incrementing the pointer.
   - **Example**:
     ```cpp
     int* ptr = arr;
     for (int i = 0; i < 5; ++i) {
         std::cout << *(ptr + i) << " ";
     }
     ```

2. **Incorrect Usage of Pointers**:
   - **Description**: Highlights the mistake of printing the pointer address instead of the values.
   - **Example**:
     ```cpp
     for (int i = 0; i < 5; ++i) {
         std::cout << ptr << " "; // Incorrect: prints the address of the pointer
     }
     ```

3. **Array Indexing**:
   - **Description**: Accesses array elements using the array index.
   - **Example**:
     ```cpp
     for (int i = 0; i < 5; ++i) {
         std::cout << arr[i] << " ";
     }
     ```

4. **Range-based for Loop with Array**:
   - **Description**: Iterates over array elements using a range-based for loop.
   - **Example**:
     ```cpp
     for (int value : arr) {
         std::cout << value << " ";
     }
     ```

5. **Range-based for Loop with Pointers**:
   - **Description**: Iterates over array elements using a range-based for loop with pointers.
   - **Example**:
     ```cpp
     for (int* p = arr; p < arr + 5; ++p) {
         std::cout << *p << " ";
     }
     ```

## Example Code

```cpp
#include <iostream>

/**
 * @file [26_pointer_array_arithmetic.cpp](http://_vscodecontentref_/#%7B%22uri%22%3A%7B%22%24mid%22%3A1%2C%22fsPath%22%3A%22c%3A%5C%5CUsers%5C%5Ck6ros%5C%5CDocuments%5C%5CGitHub%5C%5CCPP%5C%5CCPP_Notes%5C%5C26_pointer_array_arithmetic.cpp%22%2C%22_sep%22%3A1%2C%22external%22%3A%22file%3A%2F%2F%2Fc%253A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F26_pointer_array_arithmetic.cpp%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F26_pointer_array_arithmetic.cpp%22%2C%22scheme%22%3A%22file%22%7D%7D)
 * @brief Demonstrates various methods to print array elements using pointers and array indexing in C++.
 * 
 * This program initializes an array of integers and demonstrates the following:
 * - Printing array elements using pointer arithmetic.
 * - Incorrect usage of pointers to print array elements.
 * - Printing array elements using array indexing.
 * - Printing array elements using a range-based for loop with an array.
 * - Printing array elements using a range-based for loop with pointers.
 * 
 * @note The incorrect usage section highlights the mistake of printing the pointer address instead of the values.
 * 
 * @limitations
 * - Pointers cannot be directly used in range-based for loops as they are designed to work with containers.
 * 
 * @return int Returns 0 upon successful execution.
 */

int main() {
    // Initialize an array of integers
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Pointer to the first element of the array

    // Print the array elements using pointer arithmetic
    std::cout << "Array elements using pointer arithmetic:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    // Print the array elements using just ptr (incorrect usage)
    std::cout << "Array elements using just ptr (incorrect usage):" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << ptr << " "; // This will print the address of the pointer which is the same for all iterations, not the values.
    }
    std::cout << std::endl;

    // Print the array elements using array indexing
    std::cout << "Array elements using array indexing:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Print the array elements using range-based for loop (array)
    std::cout << "Array elements using range-based for loop (array):" << std::endl;
    for (int value : arr) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Print the array elements using range-based for loop (pointer)
    std::cout << "Array elements using range-based for loop (pointer):" << std::endl;
    for (int* p = arr; p < arr + 5; ++p) {
        std::cout << *p << " ";
    }
    std::cout << std::endl;

    return 0;
}