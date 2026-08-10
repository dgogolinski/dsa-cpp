# dsa-cpp

A structured repository for algorithmic problem-solving, custom data structures, and modern C++ / C practice.

## Technical Stack

**Languages:** C++20, C11
**Build System:** CMake (>= 3.16) with Ninja
**Compilers:** GCC / Clang
**Tooling:** VS Code, CodeLLDB

## Directory Structure

```text
dsa-cpp/
├── .gitignore
├── CMakeLists.txt
├── README.md
├── include/
│   └── dsa_types.hpp    # Common data structure definitions
└── src/
    └── [problem_id]_[name]/  # Individual problem modules
        ├── solution.cpp      # C++20 implementation
        └── solution.c        # C11 implementation
        
```