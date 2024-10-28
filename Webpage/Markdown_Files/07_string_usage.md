## Overview
Demonstrates different ways to handle strings in C++.

## Key Points

- 📝 **Incorrect Character Initialization**: Demonstrates an incorrect way to initialize a character variable.
  - **Example**:
    ```cpp
    char str1 = 'abc'; // Incorrect, will cause a compilation error
    ```

- 📝 **Character Pointer to String Literal**: Demonstrates a character pointer to a string literal.
  - **Example**:
    ```cpp
    char* str2 = "abc";
    std::cout << str2 << std::endl; // Prints the string literal
    ```

- 📝 **Constant Character Pointer to String Literal**: Demonstrates a constant character pointer to a string literal.
  - **Example**:
    ```cpp
    const char* str3 = "abc";
    std::cout << str3 << std::endl; // Prints the string literal
    ```

- 📝 **std::string Class**: Demonstrates the use of the `std::string` class.
  - **Example**:
    ```cpp
    std::string str4 = "abc";
    std::cout << str4 << std::endl; // Prints the std::string object
    ```

- 📝 **std::string_view**: Demonstrates the use of the `std::string_view` class.
  - **Example**:
    ```cpp
    std::string_view str5 = str4;
    std::cout << str5 << std::endl; // Prints the std::string_view object
    ```

## Example Code

```cpp
#include <iostream>
#include <string>
#include <string_view>

/**
 * @file string_usage.cpp
 * @brief Demonstrates different ways to handle strings in C++.
 *
 * This program shows various methods to declare and use strings in C++,
 * including character arrays, character pointers, and the std::string class.
 *
 * @details
 * - [`char str1 = 'abc';`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F7_string_usage.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A23%2C%22character%22%3A9%7D%7D%5D%2C%22754aae93-21af-4c0f-8786-158a9036c01d%22%5D "Go to definition") demonstrates an incorrect way to initialize a character variable and will cause a compilation error.
 * - `char* str2 = "abc";` demonstrates a character pointer to a string literal but will only print the first character.
 * - `const char* str3 = "abc";` demonstrates a constant character pointer to a string literal which is the correct way to handle string literals using primitive types.
 * - `std::string str4 = "abc";` demonstrates the use of the std::string class which is the recommended way to handle strings in C++.
 *
 * Each string is printed to the standard output using `std::cout`.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    // Declare a char variable and initialize it with a single character 'a'
    // Note: This will cause a compilation error because 'abc' is not a single character
    char str1 = 'abc';
    std::cout << str1 << std::endl; // Print the char variable

    // Declare a char pointer and initialize it with a string literal "abc"
    char* str2 = "abc";
    std::cout << str2 << std::endl; // Print the string literal

    // Declare a const char pointer and initialize it with a string literal "abc"
    const char* str3 = "abc";
    std::cout << str3 << std::endl; // Print the string literal

    // Declare a std::string object and initialize it with a string literal "abc"
    std::string str4 = "abc";
    std::cout << str4 << std::endl; // Print the std::string object

    // Declare a std::string_view object and initialize it with the std::string object
    std::string_view str5 = str4;
    std::cout << str5 << std::endl; // Print the std::string_view object

    return 0; // Return 0 to indicate successful execution
}