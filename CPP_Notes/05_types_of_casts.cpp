
/**
 * @file 05_types_of_casts.cpp
 * @brief Demonstrates different types of casts in C++: static_cast, dynamic_cast, const_cast, and reinterpret_cast.
 * 
 * This file contains examples of how to use various C++ casting operators:
 * - static_cast: Used for standard type conversions.
 * - dynamic_cast: Used for safe downcasting in inheritance hierarchies.
 * - const_cast: Used to add or remove the const qualifier.
 * - reinterpret_cast: Used for low-level reinterpreting of bit patterns.
 * 
 * Differences, Pros, and Cons:
 * 
 * 1. static_cast:
 *    - **Usage**: Standard type conversions, such as converting between numeric types (e.g., int to float), or converting pointers within an inheritance hierarchy.
 *    - **Pros**: 
 *      - Checked at compile-time, making it safer than C-style casts.
 *      - Can be used for both upcasting and downcasting within an inheritance hierarchy.
 *    - **Cons**: 
 *      - No runtime type checking, so incorrect casts can lead to undefined behavior.
 *    - **When and Why**: Use when you need to perform a well-defined and safe type conversion that doesn't require runtime type checking.
 * 
 * 2. dynamic_cast:
 *    - **Usage**: Safe downcasting in inheritance hierarchies, particularly when dealing with polymorphic types (i.e., classes with virtual functions).
 *    - **Pros**: 
 *      - Provides runtime type checking, returning nullptr if the cast is invalid (for pointers) or throwing std::bad_cast (for references).
 *    - **Cons**: 
 *      - Slightly slower due to runtime type checking.
 *      - Requires the base class to have at least one virtual function.
 *    - **When and Why**: Use when you need to safely downcast in an inheritance hierarchy and want to ensure the cast is valid at runtime.
 * 
 * 3. const_cast:
 *    - **Usage**: Adding or removing the const qualifier from a variable.
 *    - **Pros**: 
 *      - Allows modification of a variable that was originally declared as const.
 *    - **Cons**: 
 *      - Can lead to undefined behavior if used improperly, such as modifying a const object.
 *    - **When and Why**: Use when you need to remove constness to modify a variable, but be cautious to ensure the original object is not truly const.
 * 
 * 4. reinterpret_cast:
 *    - **Usage**: Low-level reinterpreting of bit patterns, such as converting between unrelated pointer types.
 *    - **Pros**: 
 *      - Very powerful and flexible, allowing for conversions that other casts do not support.
 *    - **Cons**: 
 *      - Highly unsafe, as it can easily lead to undefined behavior if used incorrectly.
 *    - **When and Why**: Use when you need to perform low-level operations that require reinterpreting the bit pattern of an object, but only when you are certain of what you are doing.
 * 
 * Classes:
 * - Base: A base class with a virtual function foo().
 * - Derived: A derived class that overrides the foo() function.
 * 
 * Functions:
 * - demonstrateStaticCast(): Demonstrates the use of static_cast to convert an int to a float.
 * - demonstrateDynamicCast(): Demonstrates the use of dynamic_cast for safe downcasting.
 * - demonstrateConstCast(): Demonstrates the use of const_cast to remove the const qualifier.
 * - demonstrateReinterpretCast(): Demonstrates the use of reinterpret_cast to convert between different pointer types.
 * 
 * The main function calls each of these demonstration functions and prints the results.
 */
#include <iostream>
#include <string>

class Base {
public:
    virtual void foo() {
        std::cout << "Base::foo()" << std::endl;
    }
};

class Derived : public Base {
public:
    void foo() override {
        std::cout << "Derived::foo()" << std::endl;
    }
};

void demonstrateStaticCast() {
    int a = 10;
    float b = static_cast<float>(a); // Converts int to float
    std::cout << "static_cast: " << b << std::endl;
}

void demonstrateDynamicCast() {
    Base* basePtr = new Derived();
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr); // Safe downcast
    if (derivedPtr) {
        std::cout << "dynamic_cast successful: ";
        derivedPtr->foo();
    } else {
        std::cout << "dynamic_cast failed" << std::endl;
    }
    delete basePtr;
}

void demonstrateConstCast() {
    const int a = 20;
    int* b = const_cast<int*>(&a); // Removes const qualifier
    *b = 30; // Modifying the value through the casted pointer
    std::cout << "const_cast: " << *b << std::endl;
}

void demonstrateReinterpretCast() {
    int a = 40;
    void* ptr = reinterpret_cast<void*>(&a); // Converts int* to void*
    int* b = reinterpret_cast<int*>(ptr); // Converts void* back to int*
    std::cout << "reinterpret_cast: " << *b << std::endl;
}

int main() {
    std::cout << "Demonstrating static_cast:" << std::endl;
    demonstrateStaticCast();

    std::cout << "\nDemonstrating dynamic_cast:" << std::endl;
    demonstrateDynamicCast();

    std::cout << "\nDemonstrating const_cast:" << std::endl;
    demonstrateConstCast();

    std::cout << "\nDemonstrating reinterpret_cast:" << std::endl;
    demonstrateReinterpretCast();

    return 0;
}