# dsa-cpp

A structured repository for algorithmic problem-solving, custom data structures, and modern C++ / C practice.

## Technical Stack

* **Languages:** C++20, C11
* **Build System:** CMake (>= 3.16), Ninja / Make
* **Testing Framework:** GoogleTest, CTest
* **Supported Compilers:** GCC / Clang / MSVC
* **Tooling:** VS Code, WSL (Ubuntu), LLDB

## Directory Structure

```text
dsa-cpp/
├── .gitignore
├── CMakeLists.txt
├── README.md
├── include/
│   └── dsa_types.hpp                   # Common data structure definitions
|   └── [solution_name].hpp             # Class & function declarations
├── src/
│   └── [problem_id]_[solution_name]/   # Individual problem modules
│       ├── [solution_name].cpp         # C++20 implementation
|       └── [solution_name].c           # C11 implementation
|       └── [solution_name].md          # Task description, examples
└── tests/
    └── [solution_name]_ut.cpp          # GoogleTest files
```