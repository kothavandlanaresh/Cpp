# Types of Casts in C++

Demonstrates the use of different types of casts in C++, including `static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`.

## Key Points

1. **`static_cast`**:
   - **Description**: Used for compile-time type conversions.
   - **Example**:
     ```cpp
     int a = 10;
     float b = static_cast<float>(a); // Converts int to float
     std::cout << "static_cast: " << b << std::endl;
     ```

2. **`dynamic_cast`**:
   - **Description**: Used for safe downcasting in inheritance hierarchies.
   - **Example**:
     ```cpp
     class Base { virtual void foo() {} };
     class Derived : public Base {};
     Base* basePtr = new Derived();
     Derived* derivedPtr = dynamic_cast<Derived*>(basePtr); // Safe downcast
     if (derivedPtr) {
         std::cout << "dynamic_cast successful: ";
         derivedPtr->foo();
     } else {
         std::cout << "dynamic_cast failed" << std::endl;
     }
     delete basePtr;
     ```

3. **`const_cast`**:
   - **Description**: Used to add or remove `const` or `volatile` qualifiers.
   - **Example**:
     ```cpp
     const int a = 20;
     int* b = const_cast<int*>(&a); // Removes const qualifier
     *b = 30; // Modifying the value through the casted pointer
     std::cout << "const_cast: " << *b << std::endl;
     ```

4. **`reinterpret_cast`**:
   - **Description**: Used for low-level reinterpreting of bit patterns.
   - **Example**:
     ```cpp
     int a = 40;
     void* ptr = reinterpret_cast<void*>(&a); // Converts int* to void*
     int* b = reinterpret_cast<int*>(ptr); // Converts void* back to int*
     std::cout << "reinterpret_cast: " << *b << std::endl;
     ```

## Example Code

```cpp
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