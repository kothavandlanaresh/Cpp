## Overview
Demonstrates the behavior of modifying a constant integer through a pointer cast in C++.

## Key Points

- 📝 **Constant Integer**: Declares a constant integer `x` with a value of 5.
  - **Example**:
    ```cpp
    const int x = 5;
    ```

- 📝 **Pointer Casting**: Creates a pointer `p` that points to `x` by casting away the constness.
  - **Example**:
    ```cpp
    int *p = (int*)&x;
    ```

- 📝 **Modifying Constant**: Modifies the value pointed to by `p` to 6.
  - **Example**:
    ```cpp
    *p = 6;
    ```

- 📝 **Printing the Value**: Prints the value of `x` to the standard output.
  - **Example**:
    ```cpp
    std::cout << x << std::endl;
    ```

## Example Code

```cpp
#include <iostream>

/**
 * @file [11_const.cpp](http://_vscodecontentref_/#%7B%22uri%22%3A%7B%22%24mid%22%3A1%2C%22fsPath%22%3A%22c%3A%5C%5CUsers%5C%5Ck6ros%5C%5CDocuments%5C%5CGitHub%5C%5CCPP%5C%5CCPP_Notes%5C%5C11_const.cpp%22%2C%22_sep%22%3A1%2C%22external%22%3A%22file%3A%2F%2F%2Fc%253A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11_const.cpp%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11_const.cpp%22%2C%22scheme%22%3A%22file%22%7D%7D)
 * @brief Demonstrates the behavior of modifying a constant integer through a pointer cast.
 *
 * This function demonstrates the behavior of modifying a constant integer
 * through a pointer cast. It declares a constant integer [`x`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11_const.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A14%2C%22character%22%3A14%7D%7D%5D%2C%22e36813b2-90a3-43ef-8399-b186576a30ea%22%5D "Go to definition") with a value of 5,
 * then creates a pointer [`p`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11_const.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A15%2C%22character%22%3A9%7D%7D%5D%2C%22e36813b2-90a3-43ef-8399-b186576a30ea%22%5D "Go to definition") that points to [`x`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11_const.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A14%2C%22character%22%3A14%7D%7D%5D%2C%22e36813b2-90a3-43ef-8399-b186576a30ea%22%5D "Go to definition") by casting away the constness.
 * The value pointed to by [`p`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11_const.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A15%2C%22character%22%3A9%7D%7D%5D%2C%22e36813b2-90a3-43ef-8399-b186576a30ea%22%5D "Go to definition") is then modified to 6. Finally, the program
 * prints the value of [`x`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11_const.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A14%2C%22character%22%3A14%7D%7D%5D%2C%22e36813b2-90a3-43ef-8399-b186576a30ea%22%5D "Go to definition") to the standard output.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    const int x = 5;
    int *p = (int*)&x;
    *p = 6;
    std::cout << x << std::endl;

    return 0;
}