## Overview
Demonstrates different types of loops in C++: range-based for loop, traditional for loop, while loop, and do-while loop.

## Key Points

1. **Range-based for loop**:
   - **Syntax**: `for (const auto& element : container)`
   - **Advantages**:
     - More readable and less error-prone.
     - Avoids explicit indexing.
     - Prevents accidental modification of container elements by using const reference.
     - Better performance as it avoids copying elements.
   - **Limitations**:
     - Cannot be used if you need to modify the container or access the index.

2. **Traditional for loop**:
   - **Syntax**: `for (size_t i = 0; i < container.size(); ++i)`
   - **Advantages**:
     - Provides more control over the iteration process.
     - Useful when you need to modify elements or access the index.
   - **Limitations**:
     - More verbose and prone to off-by-one errors.

3. **While loop**:
   - **Syntax**: `while (condition) { // code }`
   - **Advantages**:
     - Useful when the number of iterations is not known beforehand.
   - **Limitations**:
     - Can be less readable if the loop condition is complex.

4. **Do-while loop**:
   - **Syntax**: `do { // code } while (condition);`
   - **Advantages**:
     - Guarantees at least one iteration.
     - Useful when the loop body needs to be executed at least once.

## Performance Optimization Tips
- Prefer range-based for loops for better readability and performance.
- Use const references to avoid unnecessary copying.
- Choose the appropriate loop type based on the specific use case.

## Example Code

```cpp
#include <iostream>
#include <vector>

// Function to demonstrate range-based for loop
void rangeBasedForLoop(const std::vector<int>& vec) {
    std::cout << "Range-based for loop: ";
    for (const int& value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

// Function to demonstrate traditional for loop
void traditionalForLoop(const std::vector<int>& vec) {
    std::cout << "Traditional for loop: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

// Function to demonstrate while loop
void whileLoop(const std::vector<int>& vec) {
    std::cout << "While loop: ";
    size_t i = 0;
    while (i < vec.size()) {
        std::cout << vec[i] << " ";
        ++i;
    }
    std::cout << std::endl;
}

// Function to demonstrate do-while loop
void doWhileLoop(const std::vector<int>& vec) {
    std::cout << "Do-while loop: ";
    size_t i = 0;
    if (!vec.empty()) {
        do {
            std::cout << vec[i] << " ";
            ++i;
        } while (i < vec.size());
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    rangeBasedForLoop(numbers);
    traditionalForLoop(numbers);
    whileLoop(numbers);
    doWhileLoop(numbers);

    return 0;
}

/*
 * Explanation:
 * 
 * 1. Range-based for loop:
 *    - Syntax: for (const auto& element : container)
 *    - The auto keyword deduces the type of the elements in the container.
 *    - It is more readable and less error-prone.
 *    - Avoids the need for explicit indexing.
 *    - Prevents accidental modification of the container elements by using const reference.
 *    - Better performance as it avoids copying elements.
 *    - However, it cannot be used if you need to modify the container or access the index.
 * 
 * 2. Traditional for loop:
 *    - Syntax: for (size_t i = 0; i < container.size(); ++i)
 *    - Provides more control over the iteration process.
 *    - Useful when you need to modify elements or access the index.
 *    - More verbose and prone to off-by-one errors.
 * 
 * 3. While loop:
 *    - Syntax: while (condition) { // code }
 *    - Useful when the number of iterations is not known beforehand.
 *    - Can be less readable if the loop condition is complex.
 * 
 * 4. Do-while loop:
 *    - Syntax: do { // code } while (condition);
 *    - Similar to while loop but guarantees at least one iteration.
 *    - Useful when the loop body needs to be executed at least once.
 * 
 * Performance Optimization Tips:
 * - Prefer range-based for loops for better readability and performance.
 * - Use const references to avoid unnecessary copying.
 * - Choose the appropriate loop type based on the specific use case.
 */