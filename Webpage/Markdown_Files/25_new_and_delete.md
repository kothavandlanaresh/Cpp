## Overview
Demonstrates the use of `new` and `delete` in C++ for dynamic memory allocation and deallocation, along with best practices to avoid common pitfalls.

## Key Points

1. **Dynamic Memory Allocation**:
   - **Description**: Allocates memory on the heap at runtime.
   - **Example**:
     ```cpp
     int* ptr = new int; // Allocates memory for a single integer
     *ptr = 10;
     std::cout << "Value: " << *ptr << std::endl;
     ```

2. **Manual Memory Management**:
   - **Description**: Requires explicit deallocation of memory to avoid memory leaks.
   - **Example**:
     ```cpp
     delete ptr; // Deallocates the memory
     ```

3. **Dangling Pointer**:
   - **Description**: A pointer that references deallocated memory, leading to undefined behavior if accessed.
   - **Example**:
     ```cpp
     delete ptr;
     // std::cout << "Dangling pointer value: " << *ptr << std::endl; // Undefined behavior
     ```

4. **Double Delete**:
   - **Description**: Deleting the same memory twice can cause a crash or undefined behavior.
   - **Example**:
     ```cpp
     delete ptr;
     // delete ptr; // Undefined behavior
     ```

5. **Best Practice**:
   - **Description**: Set pointer to `nullptr` after deleting to avoid dangling pointers.
   - **Example**:
     ```cpp
     delete ptr;
     ptr = nullptr;
     ```

6. **Allocating Arrays**:
   - **Description**: Allocates memory for an array of elements.
   - **Example**:
     ```cpp
     int* arr = new int[5];
     for (int i = 0; i < 5; ++i) {
         arr[i] = i * 10;
     }
     ```

7. **Deleting Arrays**:
   - **Description**: Requires `delete[]` to deallocate memory for arrays.
   - **Example**:
     ```cpp
     delete[] arr;
     ```

8. **Smart Pointers**:
   - **Description**: Use smart pointers like `std::unique_ptr` to avoid manual memory management.
   - **Example**:
     ```cpp
     #include <memory>
     std::unique_ptr<int> smartPtr = std::make_unique<int>(20);
     std::cout << "Smart pointer value: " << *smartPtr << std::endl;
     ```

## Example Code

```cpp
#include <iostream>
#include <memory>

int main() {
    // Example demonstrating the use of new and delete in C++

    // Advantage: Dynamic memory allocation
    // Allocate memory for an integer on the heap
    int* ptr = new int;
    *ptr = 10;
    std::cout << "Value: " << *ptr << std::endl;

    // Disadvantage: Manual memory management
    // If we forget to delete the allocated memory, it will cause a memory leak
    delete ptr;

    // Pitfall: Dangling pointer
    // After deleting the memory, ptr becomes a dangling pointer
    // Accessing it will lead to undefined behavior
    // std::cout << "Dangling pointer value: " << *ptr << std::endl; // Uncommenting this line will cause undefined behavior

    // Danger: Double delete
    // Deleting the same memory twice can cause a crash or undefined behavior
    // delete ptr; // Uncommenting this line will cause undefined behavior

    // Best practice: Set pointer to nullptr after deleting
    ptr = nullptr;

    // Example of allocating an array
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    // Accessing array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << "Array element " << i << ": " << arr[i] << std::endl;
    }

    // Deleting the array
    delete[] arr;

    // Best practice: Use smart pointers to avoid manual memory management
    std::unique_ptr<int> smartPtr = std::make_unique<int>(20);
    std::cout << "Smart pointer value: " << *smartPtr << std::endl;

    return 0;
}