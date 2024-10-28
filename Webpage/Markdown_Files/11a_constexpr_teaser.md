## Overview
Demonstrates the use of `constexpr` in C++ to define a constant expression integer.

## Key Points

- 📝 **Constant Expression Integer (`constexpr`)**: Defines a variable whose value is known at compile-time.
  - **Example**:
    ```cpp
    constexpr int x = 5;
    ```

- 📝 **Regular Integer**: Defines a regular integer whose value can be modified at runtime.
  - **Example**:
    ```cpp
    int y = 5;
    ```

- 📝 **Attempt to Modify `constexpr`**: Shows that modifying a `constexpr` variable results in a compilation error.
  - **Example**:
    ```cpp
    // x = 6; // Error: assignment of read-only variable 'x'
    ```

- 📝 **Modify Regular Integer**: Shows that modifying a regular integer is allowed.
  - **Example**:
    ```cpp
    y = 6; // No error
    ```

- 📝 **Printing Values**: Prints the values of the `constexpr` and regular integer to the standard output.
  - **Example**:
    ```cpp
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    ```

## Example Code

```cpp
#include <iostream>

/**
 * @file [11a_constexpr_teaser.cpp](http://_vscodecontentref_/#%7B%22uri%22%3A%7B%22%24mid%22%3A1%2C%22fsPath%22%3A%22c%3A%5C%5CUsers%5C%5Ck6ros%5C%5CDocuments%5C%5CGitHub%5C%5CCPP%5C%5CCPP_Notes%5C%5C11a_constexpr_teaser.cpp%22%2C%22_sep%22%3A1%2C%22external%22%3A%22file%3A%2F%2F%2Fc%253A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22scheme%22%3A%22file%22%7D%7D)
 * @brief Demonstrates the use of [`constexpr`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A11%2C%22character%22%3A4%7D%7D%5D%2C%226802a65b-eec1-4882-9c68-cf052ffc2920%22%5D "Go to definition") in C++ to define a constant expression integer.
 *
 * This program shows how to define a constant expression integer using the [`constexpr`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A11%2C%22character%22%3A4%7D%7D%5D%2C%226802a65b-eec1-4882-9c68-cf052ffc2920%22%5D "Go to definition") keyword.
 * It also demonstrates the difference between a [`constexpr`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A11%2C%22character%22%3A4%7D%7D%5D%2C%226802a65b-eec1-4882-9c68-cf052ffc2920%22%5D "Go to definition") variable and a regular integer variable.
 *
 * @details
 * - [`constexpr int x = 5;`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A11%2C%22character%22%3A18%7D%7D%5D%2C%226802a65b-eec1-4882-9c68-cf052ffc2920%22%5D "Go to definition") defines a constant expression integer whose value is known at compile-time.
 * - [`int y = 5;`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A12%2C%22character%22%3A8%7D%7D%5D%2C%226802a65b-eec1-4882-9c68-cf052ffc2920%22%5D "Go to definition") defines a regular integer whose value can be modified at runtime.
 * - Attempting to modify [`x`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A11%2C%22character%22%3A18%7D%7D%5D%2C%226802a65b-eec1-4882-9c68-cf052ffc2920%22%5D "Go to definition") results in a compilation error, while modifying [`y`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A12%2C%22character%22%3A8%7D%7D%5D%2C%226802a65b-eec1-4882-9c68-cf052ffc2920%22%5D "Go to definition") is allowed.
 * - The values of [`x`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A11%2C%22character%22%3A18%7D%7D%5D%2C%226802a65b-eec1-4882-9c68-cf052ffc2920%22%5D "Go to definition") and [`y`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F11a_constexpr_teaser.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A12%2C%22character%22%3A8%7D%7D%5D%2C%226802a65b-eec1-4882-9c68-cf052ffc2920%22%5D "Go to definition") are printed to the standard output using `std::cout`.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    /**
     * @brief A constant expression integer.
     * 
     * This variable is defined as a constant expression, meaning its value is known at compile-time.
     * It can be used in contexts that require constant expressions, such as array sizes, template parameters, etc.
     * 
     * @note The value of this variable is 5.
     */
    constexpr int x = 5;
    int y = 5;

    // x = 6; // Error: assignment of read-only variable 'x'
    y = 6; // No error

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}