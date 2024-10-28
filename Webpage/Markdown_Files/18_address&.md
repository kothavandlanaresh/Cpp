## Overview
Demonstrates the use of references in C++ to modify variables and pass parameters to functions.

## Key Points

- 📝 **References**: An alias for another variable, providing a way to access the same memory location with a different name.
  - **Example**:
    ```cpp
    int a = 10;
    int& ref = a; // ref is a reference to a
    ```

- 📝 **Parameter Passing**: References are often used for parameter passing in functions to avoid copying large amounts of data.
  - **Example**:
    ```cpp
    void increment(int& ref) {
        ref++;
    }
    ```

- 📝 **Modifying Variables**: References can be used to modify the original variable.
  - **Example**:
    ```cpp
    ref = 15; // Changes the value of a to 15
    ```

- 📝 **Rebinding References**: Once a reference is bound to a variable, it cannot be changed to refer to another variable.
  - **Example**:
    ```cpp
    // ref = b; // This line would change the value of a to the value of b, not rebind ref to b
    ```

## Example Code

```cpp
#include <iostream>

/**
 * @file 
 * @brief This program demonstrates the use of references in C++.
 *
 * References are an alias for another variable, providing a way to access the same memory location with a different name.
 * They are often used for parameter passing in functions to avoid copying large amounts of data.
 *
 * The program includes:
 * - A function [`increment`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A60%2C%22character%22%3A5%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition") that takes an integer reference and increments its value.
 * - An example in the [`main`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A64%2C%22character%22%3A4%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition") function that shows how references work and how they can be used to modify variables.
 *
 * Detailed Explanation:
 * In C++, a reference is an alias for another variable. Once you create a reference to a variable, you cannot change it to refer to another variable. 
 * This is different from pointers, which can be reassigned to point to different variables.
 *
 * Example:
 * @code
 * #include <iostream>
 *
 * int main() {
 *     int a = 10;
 *     int b = 20;
 *
 *     // Create a reference to variable 'a'
 *     int& ref = a;
 *
 *     std::cout << "ref initially refers to a: " << ref << std::endl; // Output: 10
 *
 *     // Changing the value of 'a' through the reference
 *     ref = 15;
 *     std::cout << "a after changing ref: " << a << std::endl; // Output: 15
 *
 *     // Attempting to rebind the reference to another variable 'b'
 *     // This is not allowed and will not compile:
 *     // ref = b; // This line would change the value of 'a' to 20, not rebind ref to 'b'
 *
 *     // Correct way to change the value of 'b' through the reference
 *     ref = b;
 *     std::cout << "a after assigning b to ref: " << a << std::endl; // Output: 20
 *     std::cout << "b: " << b << std::endl; // Output: 20
 *
 *     return 0;
 * }
 * @endcode
 *
 * In this example:
 * - `int& ref = a;` creates a reference [`ref`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A60%2C%22character%22%3A20%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition") to the variable [`a`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A65%2C%22character%22%3A8%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition").
 * - You can use [`ref`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A60%2C%22character%22%3A20%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition") to change the value of [`a`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A65%2C%22character%22%3A8%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition").
 * - Attempting to rebind [`ref`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A60%2C%22character%22%3A20%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition") to [`b`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A66%2C%22character%22%3A8%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition") directly is not allowed. Instead, [`ref = b;`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A60%2C%22character%22%3A20%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition") changes the value of [`a`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A65%2C%22character%22%3A8%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition") to the value of [`b`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F18_address%26.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A66%2C%22character%22%3A8%7D%7D%5D%2C%22557cf4bb-9c18-4735-99e8-504fc9ab0f2f%22%5D "Go to definition").
 *
 * The key takeaway is that once a reference is bound to a variable, it remains bound to that variable for its entire lifetime.
 */

// Function to increment the value of an integer reference
void increment(int &ref) {
    ref++; // Increment the value of the integer that 'ref' refers to.
}

int main() {
    int a = 10;
    int b = 20;

    // Create a reference to variable 'a'
    int &ref = a;

    std::cout << "ref initially refers to a: " << ref << std::endl; // Output: 10

    // Changing the value of 'a' through the reference
    ref = 15;
    std::cout << "a after changing ref: " << a << std::endl; // Output: 15

    // Attempting to rebind the reference to another variable 'b'
    // This is not allowed and will not compile:
    // ref = b; // This line would change the value of 'a' to 20, not rebind ref to 'b'

    // Correct way to change the value of 'b' through the reference
    ref = b;
    std::cout << "a after assigning b to ref: " << a << std::endl; // Output: 20
    std::cout << "b: " << b << std::endl; // Output: 20

    // Additional example with the increment function
    int &refA = a; // 'refA' is a reference to 'a'. It is now an alias for 'a'.

    std::cout << "Initial value of a: " << a << std::endl;
    std::cout << "Initial value of refA: " << refA << std::endl;

    // Modifying 'refA' will modify 'a' as well, since they refer to the same memory location.
    refA = 20;
    std::cout << "Value of a after modifying refA: " << a << std::endl;

    // Passing 'a' to the increment function by reference.
    increment(a);
    std::cout << "Value of a after incrementing: " << a << std::endl;

    return 0;
}