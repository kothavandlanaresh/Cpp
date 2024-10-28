#include <iostream>
#include <functional>

// Function to be used with function pointers
int add(int a, int b) {
    return a + b;
}

// Using typedef for function pointer
typedef int (*FuncPtr)(int, int);

// Using std::function
std::function<int(int, int)> func;

int main() {
    // Direct function pointer
    int (*funcPtr)(int, int) = add;
    std::cout << "Using direct function pointer: " << funcPtr(2, 3) << std::endl;

    // Using typedef
    FuncPtr funcPtrTypedef = add;
    std::cout << "Using typedef function pointer: " << funcPtrTypedef(2, 3) << std::endl;

    // Using std::function
    func = add;
    std::cout << "Using std::function: " << func(2, 3) << std::endl;

    return 0;
}

/*
Pros and Cons:

1. Direct Function Pointer:
   Pros:
   - Simple and straightforward.
   - No additional overhead.
   Cons:
   - Syntax can be cumbersome.
   - Limited to function pointers only.

2. Typedef Function Pointer:
   Pros:
   - Simplifies the syntax.
   - Easier to manage and read.
   Cons:
   - Still limited to function pointers.
   - Typedefs can sometimes obscure the actual type.

3. std::function:
   Pros:
   - More flexible and powerful.
   - Can store any callable object (functions, lambda expressions, bind expressions, etc.).
   - Easier to use with modern C++ features.
   Cons:
   - Slightly more overhead compared to raw function pointers.
   - Requires inclusion of the <functional> header.

Conclusion:
- For simple use cases where performance is critical, direct function pointers or typedefs might be preferable.
- For more complex scenarios requiring flexibility and ease of use, `std::function` is generally better and more versatile.
*/