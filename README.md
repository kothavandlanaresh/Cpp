# Important Notes on C++ Concepts (Detailed Markdown Documentation)

This repository contains important notes on various C++ concepts, organized in the `IMPORTANT_NOTES.MD` file. Each section in the notes file provides a brief overview of a specific topic, and references to corresponding `.cpp` files for detailed explanations and examples.

## How to Read the Notes

The `IMPORTANT_NOTES.MD` file is divided into several sections, each covering a different C++ concept. Below is a guide on how to navigate the notes and find detailed explanations in the corresponding `.cpp` files.

### Sections in IMPORTANT_NOTES.MD

- **Casting Away Const**
  - Brief explanation of why casting away `const` is considered bad practice.

- **String Initialization**
  - Different ways to initialize strings in C++ and their correctness.

- **Globals**
  - Discussion on the drawbacks of using global variables.

- **Reference 01**
  - Covers inline functions, extern variables, and friend functions.
  - Detailed explanations can be found in `Reference01.cpp`.

- **Reference 02**
  - Discusses various initialization methods in C++.
  - Detailed explanations can be found in `Reference02.cpp`.

- **Reference 13**
  - Discusses `std::array`, `std::vector`, and smart pointers (`std::unique_ptr` and `std::shared_ptr`).
  - Detailed explanations can be found in `Reference13.cpp`.

### Detailed Explanations

For a deeper understanding of the concepts mentioned in the `IMPORTANT_NOTES.MD` file, refer to the corresponding `.cpp` files:

- **Reference01.cpp**
  - Provides detailed explanations and examples of inline functions, extern variables, and friend functions.

- **Reference02.cpp**
  - Contains detailed explanations and examples of various initialization methods in C++.

- **Reference13.cpp**
  - Explains `std::array`, `std::vector`, and smart pointers in detail.
  - Discusses why `std::vector` is preferred over other containers and raw pointers.

### Example: Reference 13

In the `IMPORTANT_NOTES.MD` file, the section **Reference 13** provides a brief overview of `std::array`, `std::vector`, and smart pointers. For a detailed explanation, refer to the `Reference13.cpp` file, which covers:

- The advantages of using `std::array` over raw arrays.
- The flexibility and robustness of `std::vector`.
- How smart pointers (`std::unique_ptr` and `std::shared_ptr`) manage the lifetime of dynamically allocated objects.
- Why `std::vector` is preferred over other containers and raw pointers.

## Conclusion

The `IMPORTANT_NOTES.MD` file serves as a quick reference guide for various C++ concepts, while the corresponding `.cpp` files provide detailed explanations and examples. Use this README to navigate through the notes and find the information you need.

Happy coding!