/**
 * @file 01_inlie_extern_friend.cpp
 * @brief Demonstrates the use of inline functions, extern variables, and friend functions in C++.
 *
 * This file contains examples of:
 * - Inline functions: Functions defined with the `inline` keyword to suggest to the compiler to insert the function's body where the function call is made.
 * - Extern variables: Variables declared with the `extern` keyword to indicate that the variable is defined in another translation unit.
 *      In general the extern keyword is declared in the header file and the variable is defined in the source file.
 *      The variable is defined in the file `01_inline_extern_friend.cpp`.
 *      Even when the variable is defined in an another file other than 01_inline_extern_friend.cpp there will be no error.
 *      The variable is accessed in the main function.
 * - Friend functions: Functions declared with the `friend` keyword within a class to allow access to the class's private and protected members.
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
    MyClass(int val) : secret(val) {
    }

    // Friend function declaration
    friend void revealSecret(const MyClass &obj);
};

// Friend function definition
void revealSecret(const MyClass &obj) {
    std::cout << "The secret value is: " << obj.secret << std::endl;
}

void revealSecret(const MyClass obj) {
    // std::cout << "The secret value is: "
    // << obj.secret << std::endl;
}


// Extern variable definition
int globalVar = 42;

int main() {
    // Using inline function
    int result = add(3, 4);
    std::cout << "Result of inline add function: "
            << result << std::endl;

    // Using extern variable
    std::cout << "Value of extern globalVar: "
            << globalVar << std::endl;

    // Using friend function
    MyClass obj(99);
    revealSecret(obj);

    return 0;
}
