## Overview
Demonstrates block scope in C++ by showing how variables with the same name can exist in different scopes.

## Key Points

- 📝 **Block Scope**: Variables declared within a block `{}` are only accessible within that block.
  - **Example**:
    ```cpp
    {
        int x = 5;
        std::cout << "x: " << x << std::endl; // x is accessible here
    }
    // x is out of scope here
    ```

- 📝 **Outer Scope**: Variables declared in the outer scope are separate from those declared in inner blocks.
  - **Example**:
    ```cpp
    int x = 6;
    std::cout << "x: " << x << std::endl; // This x is different from the x in the inner block
    ```

- 📝 **Scope Error**: Attempting to access a variable outside its scope results in a compilation error.
  - **Example**:
    ```cpp
    // std::cout << x << std::endl; // Error: 'x' is out of scope
    ```

## Example Code

```cpp
#include <iostream>

/**
 * @file scope.cpp
 * @brief Demonstrates block scope in C++.
 *
 * This program shows how variables with the same name can exist in different scopes.
 * 
 * In the first block, an integer variable [`x`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F12_scope.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A20%2C%22character%22%3A12%7D%7D%5D%2C%22cf275918-3bca-4b5b-a15b-65e1add07960%22%5D "Go to definition") is declared and initialized to 5.
 * This variable is only accessible within this block.
 * 
 * After the block ends, another integer variable [`x`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F12_scope.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A20%2C%22character%22%3A12%7D%7D%5D%2C%22cf275918-3bca-4b5b-a15b-65e1add07960%22%5D "Go to definition") is declared and initialized to 6.
 * This variable is separate from the first [`x`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F12_scope.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A20%2C%22character%22%3A12%7D%7D%5D%2C%22cf275918-3bca-4b5b-a15b-65e1add07960%22%5D "Go to definition") and is accessible in the outer scope.
 * 
 * The program outputs the value of [`x`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F12_scope.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A20%2C%22character%22%3A12%7D%7D%5D%2C%22cf275918-3bca-4b5b-a15b-65e1add07960%22%5D "Go to definition") in both scopes to illustrate the concept of block scope.
 */
int main() {
    {
        int x = 5;
        std::cout << "x: " << x << std::endl; // Outputs: x: 5
    }

    // std::cout << x << std::endl;  // Error: 'x' is out of scope

    int x = 6;
    std::cout << "x: " << x << std::endl; // Outputs: x: 6

    return 0;
}