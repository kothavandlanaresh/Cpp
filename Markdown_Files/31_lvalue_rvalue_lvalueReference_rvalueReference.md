# Lvalue and Rvalue References in C++

Demonstrates the use of lvalue and rvalue references in C++, including their pros and cons, and important things to remember.

## Key Points

1. **Lvalue Reference**:
   - **Description**: A reference that binds to an lvalue.
   - **Example**:
     ```cpp
     void lvalueReferenceFunction(int& x) {
         std::cout << "lvalueReferenceFunction called with lvalue: " << x << std::endl;
     }
     ```

2. **Rvalue Reference**:
   - **Description**: A reference that binds to an rvalue.
   - **Example**:
     ```cpp
     void rvalueReferenceFunction(int&& x) {
         std::cout << "rvalueReferenceFunction called with rvalue: " << x << std::endl;
     }
     ```

3. **Using `std::move`**:
   - **Description**: Converts an lvalue to an rvalue.
   - **Example**:
     ```cpp
     rvalueReferenceFunction(std::move(b)); // OK: std::move(b) converts 'b' to an rvalue
     ```

4. **Const References**:
   - **Description**: Prevents modification of the referenced value.
   - **Example**:
     ```cpp
     const int& constLref = a; // const lvalue reference to 'a'
     const int&& constRref = 30; // const rvalue reference to a temporary rvalue 30
     ```

## Example Code

```cpp
#include <iostream>
#include <utility> // for std::move

// Function that takes an lvalue reference
void lvalueReferenceFunction(int& x) {
    std::cout << "lvalueReferenceFunction called with lvalue: " << x << std::endl;
}

// Function that takes an rvalue reference
void rvalueReferenceFunction(int&& x) {
    std::cout << "rvalueReferenceFunction called with rvalue: " << x << std::endl;
}

int main() {
    int a = 10; // 'a' is an lvalue
    int b = 20; // 'b' is an lvalue

    // lvalue reference
    int& lref = a; // lref is an lvalue reference to 'a'
    lvalueReferenceFunction(lref); // OK: lref is an lvalue

    // rvalue reference
    int&& rref = 30; // rref is an rvalue reference to a temporary rvalue 30
    rvalueReferenceFunction(std::move(b)); // OK: std::move(b) converts 'b' to an rvalue

    // Pitfall: Trying to bind an rvalue reference to an lvalue without std::move
    // rvalueReferenceFunction(b); // Error: cannot bind rvalue reference to lvalue

    // Using const to avoid certain errors
    const int& constLref = a; // const lvalue reference to 'a'
    // constLref = 20; // Error: cannot modify a const reference

    const int&& constRref = 30; // const rvalue reference to a temporary rvalue 30
    // constRref = 40; // Error: cannot modify a const reference

    // Pros and Cons:
    // lvalue references:
    // Pros: Can modify the original variable, useful for passing large objects without copying.
    // Cons: Can lead to unintended side effects if the original variable is modified.

    // rvalue references:
    // Pros: Enable move semantics, which can improve performance by avoiding unnecessary copies.
    // Cons: Can be tricky to use correctly, especially with std::move and std::forward.

    // const references:
    // Pros: Prevent modification of the referenced value, which can avoid unintended side effects and errors.
    // Cons: Cannot modify the original variable through the reference.

    // Things to remember:
    // 1. Use lvalue references when you need to modify the original variable.
    // 2. Use rvalue references to enable move semantics and avoid unnecessary copies.
    // 3. Use const references to prevent modification and avoid unintended side effects.
    // 4. Be careful with std::move; it casts an lvalue to an rvalue, which can lead to dangling references if not used correctly.

    return 0;
}