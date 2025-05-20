<h1 align="center">CS50x 2025</h1>

<p align="center">
    <img class="logo" src="assets/logo-harvard.png" width="381" height="370" alt="Logo Harvard" />
</p>

<p align="center">
    <a href="https://en.cppreference.com/w/c/23">
        <img src="https://img.shields.io/badge/23-blue?style=flat&logo=c" alt="C 23" /></a>
    <a href="https://gcc.gnu.org/gcc-14/">
        <img src="https://img.shields.io/badge/gcc-14-blue?style=flat&logo=c" alt="GCC 14" /></a>
    <a href="https://cmake.org/cmake/help/v3.31/">
        <img src="https://img.shields.io/badge/cmake-3-blue?style=flat&logo=c" alt="CMake 3" /></a>
    <a href="./LICENSE.md">
        <img src="https://img.shields.io/badge/license-mit-white?style=flat&logo=github" alt="License MIT" /></a>
    <a href="https://github.com/serbouty/cs50x/releases/tag/v1.2.2">
        <img src="https://img.shields.io/badge/version-1.2.2-white?style=flat&logo=github" alt="Version 1.2.2" /></a>
    <a href="https://github.com/serbouty/cs50x/releases/tag/v1.2.2">
        <img src="https://img.shields.io/badge/status-complete-darkblue?style=flat&logo=github" alt="Complete" /></a>
</p>

## Requirements

### Visual Studio Code with GitHub Codespaces

- [Visual Studio Code for CS50](https://cs50.readthedocs.io/cs50.dev/)

### Visual Studio Code with Windows

1. Install [Visual Studio Code](https://code.visualstudio.com/).
2. Follow [Using GCC with MinGW](https://code.visualstudio.com/docs/cpp/config-mingw) until your installation is [checked](https://code.visualstudio.com/docs/cpp/config-mingw#_check-your-mingw-installation).
3. Run `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-cmake` on **MSYS2 UCRT64**.
4. Install [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools) extension in Visual Studio Code.
5. Choose **src/CMakeLists.txt** when asked.
6. Choose **GCC (ucrt64)** when asked (can be replaced later in **CMake: Project Status**).
7. Build executables in **CMake: Project Outline**.
8. Run each .exe in the terminal with `./<file-name>.exe` (location in the **build** folder).

## Lectures

### Lecture 0 : Scratch

Computer Science. Computational Thinking. Problem Solving: Inputs, Outputs.
Representation: Unary, Binary, Decimal, ASCII, Unicode, RGB.Abstraction.
Algorithms. Running Times. Pseudocode. Scratch: Functions, Arguments,
Return Values; Variables; Boolean Expressions, Conditionals; Loops; Events; Threads.

### Lecture 1 : C

C. Source Code. Machine Code. Compiler. Correctness, Design, Style. Visual Studio Code.
Syntax Highlighting. Escape Sequences. Header Files. Libraries. Manual Pages. Types.
Conditionals. Variables. Loops. Linux. Graphical User Interface (GUI).
Command-Line Interface (CLI). Constants. Comments. Pseudocode. Operators. Integer Overflow.
Floating-Point Imprecision.

Code : [src/lecture1](src/lecture1)

### Lecture 2 : Arrays

Preprocessing. Compiling. Assembling. Linking. Debugging. Arrays. Strings.
Command-Line Arguments. Cryptography.

Code : [src/lecture2](src/lecture2)

### Lecture 3 : Algorithms

Searching: Linear Search, Binary Search. Sorting: Bubble Sort, Selection Sort, Merge Sort.
Asymptotic Notation: O, Ω, Θ. Recursion.

Code : [src/lecture3](src/lecture3)

### Lecture 4 : Memory

Pointers. Segmentation Faults. Dynamic Memory Allocation. Stack. Heap. Buffer Overflow.
File I/O. Images.

Code : [src/lecture4](src/lecture4)

### Lecture 5 : Data Structures

Abstract Data Types. Queues, Stacks. Linked Lists. Trees, Binary Search Trees.
Hash Tables. Tries.

Code : [src/lecture5](src/lecture5)

## Resources

### Harvard University

- [CS50x 2025](https://cs50.harvard.edu/x/2025/)
- [CS50's Library for C](https://github.com/cs50/libcs50)
- [Lecture 0 : Scratch](https://cs50.harvard.edu/x/2025/weeks/0/)
- [Lecture 1 : C](https://cs50.harvard.edu/x/2025/weeks/1/)
- [Lecture 2 : Arrays](https://cs50.harvard.edu/x/2025/weeks/2/)
- [Lecture 3 : Algorithms](https://cs50.harvard.edu/x/2025/weeks/3/)
- [Lecture 4 : Memory](https://cs50.harvard.edu/x/2025/weeks/4/)
- [Lecture 5 : Data Structures](https://cs50.harvard.edu/x/2025/weeks/5/)

### Others

- [Microsoft Learn : C Language Documentation](https://learn.microsoft.com/en-us/cpp/c-language/?view=msvc-170)
- [UC San Diego : Data Structures](https://www.coursera.org/learn/data-structures)

## Roadmap

- [x] Lecture 0 : Scratch
- [x] Lecture 1 : C
- [x] Lecture 2 : Arrays
- [x] Lecture 3 : Algorithms
- [x] Lecture 4 : Memory
- [x] Lecture 5 : Data Structures

## License

[MIT](LICENSE.md)
