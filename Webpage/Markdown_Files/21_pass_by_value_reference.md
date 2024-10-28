## Overview
Demonstrates different parameter passing mechanisms in C++: pass by value, pass by reference, pass by pointer, pass by const reference, pass by const pointer, and pass by rvalue reference.

## Key Points

1. **Pass by Value**:
   - **Description**: The function receives a copy of the argument.
   - **Pros**: Safe, no side effects.
   - **Cons**: Can be inefficient for large objects due to copying overhead.
   - **Example**:
     ```cpp
     void passByValue(int x) {
         x = 100; // This change will not affect the original variable
     }
     ```

2. **Pass by Reference**:
   - **Description**: The function receives a reference to the original argument.
   - **Pros**: Efficient, no copying.
   - **Cons**: Can lead to side effects if the original argument is modified unintentionally.
   - **Example**:
     ```cpp
     void passByReference(int &x) {
         x = 100; // This change will affect the original variable
     }
     ```

3. **Pass by Pointer**:
   - **Description**: The function receives a pointer to the original argument.
   - **Pros**: Efficient, can be used to indicate that a parameter is optional (by passing nullptr).
   - **Cons**: Can lead to side effects, requires careful handling of pointers.
   - **Example**:
     ```cpp
     void passByPointer(int *x) {
         *x = 100; // This change will affect the original variable
     }
     ```

4. **Pass by Const Reference**:
   - **Description**: The function receives a const reference to the original argument.
   - **Pros**: Efficient, no copying, safe from modification.
   - **Cons**: None significant, but cannot modify the argument.
   - **Example**:
     ```cpp
     void passByConstReference(const int &x) {
         // x = 100; // Error: cannot modify a const reference
         std::cout << "Inside passByConstReference: x = " << x << std::endl;
     }
     ```

5. **Pass by Const Pointer**:
   - **Description**: The function receives a const pointer to the original argument.
   - **Pros**: Efficient, no copying, safe from modification.
   - **Cons**: None significant, but cannot modify the argument.
   - **Example**:
     ```cpp
     void passByConstPointer(const int *x) {
         // *x = 100; // Error: cannot modify a value through a const pointer
         std::cout << "Inside passByConstPointer: *x = " << *x << std::endl;
     }
     ```

6. **Pass by Rvalue Reference**:
   - **Description**: The function receives a reference to an rvalue (temporary object).
   - **Pros**: Efficient, allows modification of temporary objects.
   - **Cons**: Can be confusing, should be used with care to avoid dangling references.
   - **Example**:
     ```cpp
     void passByRvalueReference(int &&x) {
         x = 100; // This change will affect the original rvalue
         std::cout << "Inside passByRvalueReference: x = " << x << std::endl;
     }
     ```

## Example Code

```cpp
#include <iostream>

// Pass by Value
void passByValue(int x) {
    x = 100; // This change will not affect the original variable
}

// Pass by Reference
void passByReference(int &x) {
    x = 100; // This change will affect the original variable
}

// Pass by Pointer
void passByPointer(int *x) {
    *x = 100; // This change will affect the original variable
}

// Function to demonstrate passing by const reference
void passByConstReference(const int &x) {
    // x = 100; // Error: cannot modify a const reference
    std::cout << "Inside passByConstReference: x = " << x << std::endl;
}

// Function to demonstrate passing by const pointer
void passByConstPointer(const int *x) {
    // *x = 100; // Error: cannot modify a value through a const pointer
    std::cout << "Inside passByConstPointer: *x = " << *x << std::endl;
}

// Function to demonstrate passing by rvalue reference
void passByRvalueReference(int &&x) {
    x = 100; // This change will affect the original rvalue
    std::cout << "Inside passByRvalueReference: x = " << x << std::endl;
}

// Explanation of lvalue and rvalue
void lvalueRvalueExample() {
    int x = 10; // x is an lvalue, 10 is an rvalue
    int &ref = x; // ref is an lvalue reference to x
    // int &ref2 = 10; // Error: cannot bind non-const lvalue reference to an rvalue

    const int &constRef = 10; // Valid: const lvalue reference can bind to an rvalue

    int &&rvalueRef = 20; // rvalueRef is an rvalue reference to 20
    // int &&rvalueRef2 = x; // Error: cannot bind rvalue reference to an lvalue

    rvalueRef = 30; // Valid: modifying the rvalue reference
}

int main() {
    int a = 10;
    int b = 10;
    int c = 10;

    std::cout << "Initial values: a = " << a << ", b = " << b << ", c = " << c << std::endl;

    passByValue(a);
    std::cout << "After passByValue: a = " << a << std::endl; // a remains 10

    passByReference(b);
    std::cout << "After passByReference: b = " << b << std::endl; // b becomes 100

    passByPointer(&c);
    std::cout << "After passByPointer: c = " << c << std::endl; // c becomes 100

    passByConstReference(a);
    std::cout << "After passByConstReference: a = " << a << std::endl; // a remains 10

    passByConstPointer(&a);
    std::cout << "After passByConstPointer: a = " << a << std::endl; // a remains 10

    passByRvalueReference(20);
    std::cout << "After passByRvalueReference: rvalue = 20" << std::endl; // rvalue becomes 100

    lvalueRvalueExample();

    return 0;
}