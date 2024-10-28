## Overview
Demonstrates the use of inline functions, extern variables, and friend functions in C++.

## Key Points

1. **Inline Functions**:
   - 📋 Functions defined with the `inline` keyword to suggest to the compiler to insert the function's body where the function call is made.
   - **Example**:
     ```cpp
     inline int add(int a, int b) {
         return a + b;
     }
     ```

2. **Extern Variables**:
   - 📋 Variables declared with the `extern` keyword to indicate that the variable is defined in another translation unit.
   - **Example**:
     ```cpp
     extern int globalVar;
     ```

3. **Friend Functions**:
   - 📋 Functions declared with the `friend` keyword within a class to allow access to the class's private and protected members.
   - **Example**:
     ```cpp
     class MyClass {
     private:
         int secret;
     public:
         MyClass(int val) : secret(val) {}
         friend void revealSecret(const MyClass& obj);
     };
     ```

## Example Code

```cpp
#include <iostream>

/**
 * @file [01_inlie_extern_friend.cpp](http://_vscodecontentref_/#%7B%22uri%22%3A%7B%22%24mid%22%3A1%2C%22fsPath%22%3A%22c%3A%5C%5CUsers%5C%5Ck6ros%5C%5CDocuments%5C%5CGitHub%5C%5CCPP%5C%5CCPP_Notes%5C%5C01_inlie_extern_friend.cpp%22%2C%22_sep%22%3A1%2C%22external%22%3A%22file%3A%2F%2F%2Fc%253A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F01_inlie_extern_friend.cpp%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F01_inlie_extern_friend.cpp%22%2C%22scheme%22%3A%22file%22%7D%7D)
 * @brief Demonstrates the use of inline functions, extern variables, and friend functions in C++.
 *
 * This file contains examples of:
 * - Inline functions: Functions defined with the [`inline`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F01_inlie_extern_friend.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A2%2C%22character%22%3A34%7D%7D%5D%2C%2279da4017-d267-4b46-93ea-4d79305cc849%22%5D "Go to definition") keyword to suggest to the compiler to insert the function's body where the function call is made.
 * - Extern variables: Variables declared with the [`extern`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F01_inlie_extern_friend.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A2%2C%22character%22%3A52%7D%7D%5D%2C%2279da4017-d267-4b46-93ea-4d79305cc849%22%5D "Go to definition") keyword to indicate that the variable is defined in another translation unit.
 *      In general the extern keyword is declared in the header file and the variable is defined in the source file.
 *      The variable is defined in the file `01_inline_extern_friend.cpp`.
 *      Even when the variable is defined in an another file other than 01_inline_extern_friend.cpp there will be no error.
 *      The variable is accessed in the main function.
 * - Friend functions: Functions declared with the [`friend`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F01_inlie_extern_friend.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A2%2C%22character%22%3A74%7D%7D%5D%2C%2279da4017-d267-4b46-93ea-4d79305cc849%22%5D "Go to definition") keyword within a class to allow access to the class's private and protected members.
 *
 * The main function showcases:
 * - The use of an inline function to add two integers.
 * - The use of an extern variable to access a global variable defined elsewhere.
 * - The use of a friend function to access and print a private member of a class.
 *
 * @author Your Name
 * @date 2023-10-05
 */
#include <iostream>

// Inline function example
inline int add(int a, int b) {
    return a + b;
}

// Extern variable declaration
extern int globalVar;

// Class with friend function example
class MyClass {
private:
    int secret;

public:
    MyClass(int val) : secret(val) {}

    // Friend function declaration
    friend void revealSecret(const MyClass& obj);
};

// Friend function definition
void revealSecret(const MyClass& obj) {
    std::cout << "The secret value is: " << obj.secret << std::endl;
}

// Extern variable definition
int globalVar = 42;

int main() {
    // Using inline function
    int result = add(3, 4);
    std::cout << "Result of inline add function: " << result << std::endl;

    // Using extern variable
    std::cout << "Value of extern globalVar: " << globalVar << std::endl;

    // Using friend function
    MyClass obj(99);
    revealSecret(obj);

    return 0;
}