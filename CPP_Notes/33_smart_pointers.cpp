/**
 * @file 33_smart_pointers.cpp
 * @brief Demonstrates the use of raw pointers and smart pointers in C++.
 *
 * This file contains examples of how to use raw pointers, unique_ptr, shared_ptr, and weak_ptr.
 * It includes functions to demonstrate the allocation, usage, and deallocation of memory using these pointers.
 *
 * Functions:
 * - rawPointerDemo(): Demonstrates the use of raw pointers.
 * - uniquePointerDemo(): Demonstrates the use of unique_ptr.
 * - sharedPointerDemo(): Demonstrates the use of shared_ptr.
 * - weakPointerDemo(): Demonstrates the use of weak_ptr.
 *
 * Pros and Cons:
 *
 * Raw Pointers:
 * Pros:
 * - Direct control over memory allocation and deallocation.
 * - Can be more efficient in certain low-level programming scenarios.
 *
 * Cons:
 * - Manual memory management can lead to memory leaks and dangling pointers.
 * - Error-prone and harder to maintain.
 *
 * Smart Pointers:
 * Pros:
 * - Automatic memory management reduces the risk of memory leaks.
 * - Easier to use and maintain.
 * - Provides better safety and exception handling.
 *
 * Cons:
 * - Slightly more overhead due to automatic management.
 * - Requires understanding of different types of smart pointers (unique_ptr, shared_ptr, weak_ptr).
 *
 * Smart Pointers in Depth:
 *
 * unique_ptr:
 * - Provides exclusive ownership of a dynamically allocated object.
 * - Ensures that the object is deleted when the unique_ptr goes out of scope.
 * - Cannot be copied, but can be moved to transfer ownership.
 * - Ideal for managing resources with a single owner.
 *
 * shared_ptr:
 * - Provides shared ownership of a dynamically allocated object.
 * - Uses reference counting to keep track of how many shared_ptr instances own the same object.
 * - The object is deleted when the last shared_ptr owning it is destroyed.
 * - Can be copied and assigned, allowing multiple shared_ptr instances to share ownership.
 * - Useful for scenarios where multiple parts of a program need to share access to a resource.
 *
 * weak_ptr:
 * - Provides a non-owning reference to an object managed by a shared_ptr.
 * - Does not affect the reference count of the shared_ptr.
 * - Can be used to break circular references that can occur with shared_ptr.
 * - Allows checking if the object still exists before accessing it using the lock() method.
 * - Useful for caching, observer patterns, and avoiding cyclic dependencies.
 *
 * Best Practices:
 * - Prefer smart pointers over raw pointers for better safety and maintainability.
 * - Use `unique_ptr` when you need sole ownership of a resource.
 * - Use `shared_ptr` when you need shared ownership.
 * - Avoid circular references with `shared_ptr` by using `weak_ptr`.
 * - Always ensure proper use of smart pointers to avoid potential pitfalls like dangling references.
 */
#include <iostream>
#include <memory>

// Function to demonstrate raw pointers
void rawPointerDemo() {
    int* rawPtr = new int(10); // Allocate memory
    std::cout << "Raw Pointer Value: " << *rawPtr << std::endl;
    delete rawPtr; // Manually deallocate memory
}

// Function to demonstrate unique_ptr
void uniquePointerDemo() {
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(20); // Allocate memory
    std::cout << "Unique Pointer Value: " << *uniquePtr << std::endl;
    // Memory is automatically deallocated when uniquePtr goes out of scope
}

// Function to demonstrate shared_ptr
void sharedPointerDemo() {
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(30); // Allocate memory
    {
        std::shared_ptr<int> sharedPtr2 = sharedPtr1; // Shared ownership
        std::cout << "Shared Pointer Value (sharedPtr2): " << *sharedPtr2 << std::endl;
        std::cout << "Shared Pointer Use Count: " << sharedPtr1.use_count() << std::endl;
    }
    // sharedPtr2 goes out of scope, but memory is not deallocated because sharedPtr1 still owns it
    std::cout << "Shared Pointer Value (sharedPtr1): " << *sharedPtr1 << std::endl;
    std::cout << "Shared Pointer Use Count: " << sharedPtr1.use_count() << std::endl;
}

// Function to demonstrate weak_ptr
void weakPointerDemo() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(40); // Allocate memory
    std::weak_ptr<int> weakPtr = sharedPtr; // Weak reference to sharedPtr
    std::cout << "Shared Pointer Value (sharedPtr): " << *sharedPtr << std::endl;
    std::cout << "Weak Pointer Use Count: " << weakPtr.use_count() << std::endl;

    if (auto lockedPtr = weakPtr.lock()) { // Check if the object is still available
        std::cout << "Weak Pointer Value (lockedPtr): " << *lockedPtr << std::endl;
    } else {
        std::cout << "Weak Pointer is expired." << std::endl;
    }
}

int main() {
    std::cout << "Raw Pointer Demo:" << std::endl;
    rawPointerDemo();

    std::cout << "\nUnique Pointer Demo:" << std::endl;
    uniquePointerDemo();

    std::cout << "\nShared Pointer Demo:" << std::endl;
    sharedPointerDemo();

    std::cout << "\nWeak Pointer Demo:" << std::endl;
    weakPointerDemo();

    return 0;
}
