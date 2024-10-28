# Passing Arrays to Functions in C++

Demonstrates the difference between passing raw arrays and vectors to functions in C++.

## Key Points

1. **Printing Raw Array Elements**:
   - **Description**: Prints the elements of a raw array.
   - **Example**:
     ```cpp
     void printRawArray(int arr[], int size) {
         for (int i = 0; i < size; ++i) {
             std::cout << arr[i] << " ";
         }
         std::cout << std::endl;
     }
     ```

2. **Printing Vector Elements**:
   - **Description**: Prints the elements of a vector.
   - **Example**:
     ```cpp
     void printVector(const std::vector<int>& vec) {
         for (int elem : vec) {
             std::cout << elem << " ";
         }
         std::cout << std::endl;
     }
     ```

3. **Demonstrating the `at()` Method**:
   - **Description**: Demonstrates the use of the `at()` method for bounds checking.
   - **Example**:
     ```cpp
     void demonstrateAtMethod(const std::vector<int>& vec) {
         try {
             std::cout << "Accessing element at index 2 using at(): " << vec.at(2) << std::endl;
             std::cout << "Accessing element at index 5 using at(): " << vec.at(5) << std::endl; // This will throw an exception
         } catch (const std::out_of_range& e) {
             std::cerr << "Exception caught: " << e.what() << std::endl;
         }

         // Accessing elements using the subscript operator (no bounds checking)
         std::cout << "Accessing element at index 2 using operator[]: " << vec[2] << std::endl;
         // Accessing out-of-bounds element using the subscript operator (undefined behavior)
         std::cout << "Accessing element at index 5 using operator[]: " << vec[5] << std::endl; // This may cause undefined behavior
     }
     ```

## Example Code

```cpp
#include <iostream>
#include <vector>

/**
 * @file 28_passing_arrays_to_functions.cpp
 * @brief Demonstrates the difference between passing raw arrays and vectors to functions in C++.
 *
 * This program contains two functions: one for printing elements of a raw array and another for printing elements of a vector.
 * It highlights the advantages of using containers like std::vector over raw arrays when passing them to functions.
 *
 * Pros of using std::vector over raw arrays:
 * - Bounds checking: std::vector provides bounds checking with the at() method, reducing the risk of accessing out-of-bounds elements.
 * - Dynamic sizing: std::vector can dynamically resize itself, whereas raw arrays have a fixed size.
 * - Easier to pass: std::vector can be passed by reference, avoiding the need to pass the size separately.
 * - Rich interface: std::vector provides a rich set of member functions for various operations.
 *
 * Cons of using std::vector:
 * - Slightly more overhead: std::vector may have a slight performance overhead compared to raw arrays due to dynamic memory management.
 */

void printRawArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printVector(const std::vector<int>& vec) {
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

void demonstrateAtMethod(const std::vector<int>& vec) {
    try {
        std::cout << "Accessing element at index 2 using at(): " << vec.at(2) << std::endl;
        std::cout << "Accessing element at index 5 using at(): " << vec.at(5) << std::endl; // This will throw an exception
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Accessing elements using the subscript operator (no bounds checking)
    std::cout << "Accessing element at index 2 using operator[]: " << vec[2] << std::endl;
    // Accessing out-of-bounds element using the subscript operator (undefined behavior)
    std::cout << "Accessing element at index 5 using operator[]: " << vec[5] << std::endl; // This may cause undefined behavior
}

int main() {
    // Raw array
    int rawArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(rawArray) / sizeof(rawArray[0]);

    // Vector
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Passing raw array to function
    std::cout << "Raw array elements: ";
    printRawArray(rawArray, size);

    // Passing vector to function
    std::cout << "Vector elements: ";
    printVector(vec);

    // Demonstrating the use of the at() method
    std::cout << "Demonstrating the use of the at() method:" << std::endl;
    demonstrateAtMethod(vec);

    return 0;
}