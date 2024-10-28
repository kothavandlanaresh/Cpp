## Overview
Demonstrates the use of `break` and `continue` statements in C++.

## Key Points

- 📝 **`break` Statement**: Exits a loop prematurely.
  - **Example**:
    ```cpp
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        std::cout << i << " ";
    }
    ```

- 📝 **`continue` Statement**: Skips the current iteration and proceeds to the next one.
  - **Example**:
    ```cpp
    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        std::cout << i << " ";
    }
    ```

## Example Code

```cpp
#include <iostream>

/*
 * This program demonstrates the use of 'break' and 'continue' statements in C++.
 * 'break' is used to exit a loop prematurely, while 'continue' is used to skip the current iteration and proceed to the next one.
 */

int main() {
    // Example using break
    std::cout << "Example using break:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            break; // Exit the loop when i is 5 (before printing 5) and skip the remaining iterations
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Example using continue
    std::cout << "Example using continue:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            continue; // Skip the rest of the loop body for even numbers (i.e., skip printing even numbers) and proceed to the next iteration
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
 * Detailed Explanation:
 * 
 * 1. 'break' Statement:
 *    - The 'break' statement is used to exit a loop (for, while, do-while) or switch statement prematurely.
 *    - In the first example, the loop iterates from 0 to 9. When the value of 'i' becomes 5, the 'break' statement is executed, causing the loop to terminate immediately.
 *    - This is useful when you want to stop the loop based on a certain condition.
 *    - Tricky to use: If not used carefully, 'break' can make the code harder to understand and maintain, as it disrupts the normal flow of the loop.
 *    - 'break' is often used to exit a loop when a specific condition is met.
 *    - break can cause memory leaks if not used properly with dynamic memory allocation.
 * 
 * 2. 'continue' Statement:
 *    - The 'continue' statement skips the rest of the loop body for the current iteration and proceeds to the next iteration.
 *    - In the second example, the loop iterates from 0 to 9. When the value of 'i' is even (i % 2 == 0), the 'continue' statement is executed, causing the loop to skip the current iteration and move to the next one.
 *    - This is useful when you want to skip certain iterations based on a condition.
 *    - Tricky to use: If overused, 'continue' can make the loop logic complex and harder to follow.
 * 
 * Main Differences:
 * - 'break' exits the loop entirely, while 'continue' skips to the next iteration.
 * - 'break' is often used to terminate the loop based on a condition, whereas 'continue' is used to skip specific iterations.
 */