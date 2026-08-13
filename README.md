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

## Building & Running tests
1. **Configure**  
&nbsp;
Generate build files inside the `build/` directory:
```bash
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug
```
2. **Compile**  
&nbsp;
Build the `dsa_lib` static library and all test executables:
```bash
cmake --build build
```
3. **Run all tests**  
&nbsp;
Execute all registered test suites via CTest:
```bash
ctest --test-dir build --output-on-failure
```

## Running a single solution test
**To build and run tests for a specific problem:**  
&nbsp;
Compile single target:
```bash
cmake --build build --target <solution_name>_ut
```
Run test executable:
```bash
./build/<solution_name>_ut
```
