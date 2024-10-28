# Summary of Important Concepts

## Index
1. [Inline, Extern, and Friend Functions in C++](#inline-extern-and-friend-functions-in-c)
2. [Class Object Initialization in C++](#class-object-initialization-in-c)
3. [Compile-time and Runtime Calculations in C++](#compile-time-and-runtime-calculations-in-c)
4. [Address-of, Dereference, and Rvalue References in C++](#address-of-dereference-and-rvalue-references-in-c)
5. [String Usage in C++](#string-usage-in-c)
6. [Modifying Constants in C++](#modifying-constants-in-c)
7. [Constexpr Teaser in C++](#constexpr-teaser-in-c)
8. [Block Scope in C++](#block-scope-in-c)
9. [Raw Arrays in C++](#raw-arrays-in-c)
10. [Using std::iota with Raw Arrays in C++](#using-std-iota-with-raw-arrays-in-c)
11. [Loops in C++](#loops-in-c)
12. [Continue and Break Statements in C++](#continue-and-break-statements-in-c)
13. [Functions in C++](#functions-in-c)
14. [Recursive Functions in C++](#recursive-functions-in-c)
15. [References in C++](#references-in-c)
16. [Void Pointers and Address Printing in C++](#void-pointers-and-address-printing-in-c)
17. [Pass by Value and Reference in C++](#pass-by-value-and-reference-in-c)
18. [Dynamic Memory Management in C++](#dynamic-memory-management-in-c)
19. [Pointer and Array Arithmetic in C++](#pointer-and-array-arithmetic-in-c)
---


#### Inline, Extern, and Friend Functions in C++
- 📝 **Inline Functions**: Defined with `inline` to suggest inlining the function's body at the call site.
- 🌐 **Extern Variables**: Declared with `extern` to indicate definition in another translation unit, typically declared in headers and defined in source files.
- 🤝 **Friend Functions**: Declared with `friend` within a class to access private and protected members.

For detailed examples and explanations, refer to [01_inlie_extern_friend.md](Markdown_Files/01_inlie_extern_friend.md).


---


#### Class Object Initialization in C++
- 📝 **Direct Initialization**: Directly calls the constructor of `MyClass` with the argument.
- 📝 **Copy Initialization**: Looks like an assignment but calls the constructor of `MyClass` with the argument.
- 📝 **Uniform Initialization (Brace Initialization)**: Uses braces `{}` to initialize the object. It is part of the C++11 standard and later.
- 📝 **Default Initialization**: Calls the default constructor of `MyClass`.

For detailed examples and explanations, refer to [02_class-object-initialization.md](Markdown_Files/02_Class_Objec_Initilisation.md).


---


#### Compile-time and Runtime Calculations in C++
- 📝 **Compile-time Calculation**: Uses `constexpr` to evaluate the factorial function at compile-time.
- 📝 **Runtime Calculation**: Uses a loop to evaluate the factorial function at runtime.

For detailed examples and explanations, refer to [03_compiletime_and_runtime.md](Markdown_Files/03_compiletime_and_runtime.md).


---


#### Address-of, Dereference, and Rvalue References in C++
- 📝 **Address-of Operator (&)**: Used to obtain the memory address of a variable.
- 📝 **Dereference Operator (*)**: Used to access the value at the memory address pointed to by a pointer.
- 📝 **Rvalue Reference (&&)**: Used to bind to temporary objects (rvalues).
- 📝 **Passing by Reference**: Efficient, modifies the original variable.
- 📝 **Passing by Pointer**: Efficient, modifies the original variable, requires careful handling.
- 📝 **Passing by Rvalue Reference**: Efficient, modifies temporary objects, should be used with care.
- ⚠️ **Dangerous Habits and How to Avoid Them**:
  - **Dereferencing Null Pointers**: Always check if a pointer is null before dereferencing it.
  - **Casting Away const**: Avoid modifying const values. If necessary, ensure the original intent of const correctness is preserved.
  - **Binding Null Pointers to References**: Never bind a reference to a dereferenced null pointer.
  - **Misusing Rvalue References**: Ensure rvalue references are used appropriately and understand the implications of `std::move`.
  - **Memory Leaks**: Always manage dynamic memory properly, using smart pointers where possible.
  - **Undefined Behavior**: Be cautious of operations that can lead to undefined behavior, such as out-of-bounds access or modifying const data.

For detailed examples and explanations, refer to [04_ad&_ptr_rref&&.md](Markdown_Files/04_ad&_ptr_rref&&.md).


---


#### String Usage in C++
- 📝 **Incorrect Character Initialization**: Demonstrates an incorrect way to initialize a character variable.
- 📝 **Character Pointer to String Literal**: Demonstrates a character pointer to a string literal.
- 📝 **Constant Character Pointer to String Literal**: Demonstrates a constant character pointer to a string literal.
- 📝 **std::string Class**: Demonstrates the use of the `std::string` class.
- 📝 **std::string_view**: Demonstrates the use of the `std::string_view` class.

For detailed examples and explanations, refer to [07_string_usage.md](Markdown_Files/07_string_usage.md).


---


#### Modifying Constants in C++
- 📝 **Constant Integer**: Declares a constant integer `x` with a value of 5.
- 📝 **Pointer Casting**: Creates a pointer `p` that points to `x` by casting away the constness.
- 📝 **Modifying Constant**: Modifies the value pointed to by `p` to 6.
- 📝 **Printing the Value**: Prints the value of `x` to the standard output.

For detailed examples and explanations, refer to [11_const.md](Markdown_Files/11_const.md).


---


#### Constexpr Teaser in C++
- 📝 **Constant Expression Integer (`constexpr`)**: Defines a variable whose value is known at compile-time.
- 📝 **Regular Integer**: Defines a regular integer whose value can be modified at runtime.
- 📝 **Attempt to Modify `constexpr`**: Shows that modifying a `constexpr` variable results in a compilation error.
- 📝 **Modify Regular Integer**: Shows that modifying a regular integer is allowed.
- 📝 **Printing Values**: Prints the values of the `constexpr` and regular integer to the standard output.

For detailed examples and explanations, refer to [11a_constexpr_teaser.md](Markdown_Files/11a_constexpr_teaser.md).



---


#### Block Scope in C++
- 📝 **Block Scope**: Variables declared within a block `{}` are only accessible within that block.
- 📝 **Outer Scope**: Variables declared in the outer scope are separate from those declared in inner blocks.
- 📝 **Scope Error**: Attempting to access a variable outside its scope results in a compilation error.

For detailed examples and explanations, refer to [12_scope.md](Markdown_Files/12_scope.md).


---


#### Raw Arrays in C++
- 📝 **Raw Arrays**: Basic feature of C++ with several limitations.
- 📝 **Fixed Size**: The size of a raw array must be known at compile time and cannot be changed dynamically.
- 📝 **No Bounds Checking**: Accessing elements outside the bounds of the array can lead to undefined behavior.
- 📝 **Manual Memory Management**: When using dynamic arrays, the programmer is responsible for deallocating the memory.
- 📝 **Modern Alternatives**: `std::array`, `std::vector`, `std::unique_ptr`, and `std::shared_ptr` provide safer and more maintainable code.

For detailed examples and explanations, refer to [13_raw_arrays.md](Markdown_Files/13_raw_arrays.md).


---


#### Using std::iota with Raw Arrays in C++
- 📝 **Raw Array Creation**: Creates a raw array of integers with a fixed size.
- 📝 **Using `std::iota`**: Fills the array with sequentially increasing values starting from 0.
- 📝 **Printing Array Contents**: Uses a loop to print the contents of the array.

For detailed examples and explanations, refer to [13a_iota_raw_arrays.md](Markdown_Files/13a_iota_raw_arrays.md).


---


#### Loops in C++
- 📝 **Range-based for loop**: More readable, avoids explicit indexing, prevents accidental modification, better performance.
- 📝 **Traditional for loop**: Provides more control, useful for modifying elements or accessing the index, more verbose.
- 📝 **While loop**: Useful when the number of iterations is not known beforehand, can be less readable.
- 📝 **Do-while loop**: Guarantees at least one iteration, useful when the loop body needs to be executed at least once.
- 📝 **Performance Optimization Tips**: Prefer range-based for loops, use const references, choose the appropriate loop type.

For detailed examples and explanations, refer to [14_loops.md](Markdown_Files/14_loops.md).



---


#### Continue and Break Statements in C++
- 📝 **`break` Statement**: Exits a loop prematurely.
- 📝 **`continue` Statement**: Skips the current iteration and proceeds to the next one.

For detailed examples and explanations, refer to [15_continue_and_break.md](Markdown_Files/15_continue_and_break.md).


---


#### Functions in C++
- 📝 **Functions with no return type and no parameters**: Demonstrates a function that prints a greeting message.
- 📝 **Functions with return type and no parameters**: Demonstrates a function that returns a fixed integer value.
- 📝 **Functions with parameters and no return type**: Demonstrates a function that prints the sum of two integers.
- 📝 **Functions with parameters and return type**: Demonstrates a function that returns the product of two integers.
- 📝 **Template functions**: Demonstrates a template function that returns the sum of two values of type T.
- 📝 **Functions that take `std::function` as a parameter**: Demonstrates a function that executes a function passed as a `std::function` parameter.

For detailed examples and explanations, refer to [16_functions.md](Markdown_Files/16_functions.md).


---


#### Recursive Functions in C++
- 📝 **Recursive Function**: A function that calls itself to solve a problem.
- 📝 **Base Case**: The condition under which the recursion stops.
- 📝 **Recursive Case**: The part of the function where it calls itself with a smaller problem size.
- 📝 **Factorial Calculation**: The factorial of a number `n` (denoted as `n!`) is the product of all positive integers less than or equal to `n`.

For detailed examples and explanations, refer to [17_recursive_functions.md](Markdown_Files/17_recursive_functions.md).


---


#### References in C++
- 📝 **References**: An alias for another variable, providing a way to access the same memory location with a different name.
- 📝 **Parameter Passing**: References are often used for parameter passing in functions to avoid copying large amounts of data.
- 📝 **Modifying Variables**: References can be used to modify the original variable.
- 📝 **Rebinding References**: Once a reference is bound to a variable, it cannot be changed to refer to another variable.

For detailed examples and explanations, refer to [18_address&.md](Markdown_Files/18_address&.md).



---


#### Void Pointers and Address Printing in C++
- 📝 **Void Pointers**: A pointer that can hold the address of any data type.
- 📝 **Casting to Void Pointer**: Used to print the address of a variable.
- 📝 **Handling Void Pointers in Functions**: Demonstrates how to cast void pointers back to the appropriate type.

For detailed examples and explanations, refer to [18a_address&.md](Markdown_Files/18a_address&.md).


---


#### Pass by Value and Reference in C++
- 📝 **Pass by Value**: The function receives a copy of the argument. Changes to the parameter do not affect the original argument.
- 📝 **Pass by Reference**: The function receives a reference to the original argument. Changes to the parameter affect the original argument.
- 📝 **Pass by Pointer**: The function receives a pointer to the original argument. Changes to the dereferenced pointer affect the original argument.
- 📝 **Pass by Const Reference**: The function receives a const reference to the original argument. Changes to the parameter do not affect the original argument.
- 📝 **Pass by Const Pointer**: The function receives a const pointer to the original argument. Changes to the dereferenced pointer do not affect the original argument.
- 📝 **Pass by Rvalue Reference**: The function receives a reference to an rvalue (temporary object). Changes to the parameter affect the original rvalue.

For detailed examples and explanations, refer to [21_pass_by_value_reference.md](Markdown_Files/21_pass_by_value_reference.md).


---


#### Dynamic Memory Management in C++
- 📝 **Dynamic Memory Allocation**: Allocates memory on the heap at runtime.
- 📝 **Manual Memory Management**: Requires explicit deallocation of memory to avoid memory leaks.
- 📝 **Dangling Pointer**: A pointer that references deallocated memory, leading to undefined behavior if accessed.
- 📝 **Double Delete**: Deleting the same memory twice can cause a crash or undefined behavior.
- 📝 **Best Practice**: Set pointer to `nullptr` after deleting to avoid dangling pointers.
- 📝 **Allocating Arrays**: Allocates memory for an array of elements.
- 📝 **Deleting Arrays**: Requires `delete[]` to deallocate memory for arrays.
- 📝 **Smart Pointers**: Use smart pointers like `std::unique_ptr` to avoid manual memory management.

For detailed examples and explanations, refer to [25_new_and_delete.md](Markdown_Files/25_new_and_delete.md).


---


#### Pointer and Array Arithmetic in C++
- 📝 **Pointer Arithmetic**: Accesses array elements by incrementing the pointer.
- 📝 **Incorrect Usage of Pointers**: Highlights the mistake of printing the pointer address instead of the values.
- 📝 **Array Indexing**: Accesses array elements using the array index.
- 📝 **Range-based for Loop with Array**: Iterates over array elements using a range-based for loop.
- 📝 **Range-based for Loop with Pointers**: Iterates over array elements using a range-based for loop with pointers.

For detailed examples and explanations, refer to [26_pointer_array_arithmetic.md](Markdown_Files/26_pointer_array_arithmetic.md).



---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---



