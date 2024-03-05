# Low-Level Programming

Low-level programming involves writing code that operates at a level close to the hardware. Here are some key points:

1. **Level of Abstraction**:
   - Low-level languages provide minimal abstraction from the computer's hardware.
   - Programmers working with these languages deal with memory management, registers, and hardware-specific details explicitly.
   - These languages map closely to the processor instructions and are often either machine code or assembly language.

2. **Examples of Low-Level Languages**:
   - **C** and **C++** are commonly used low-level programming languages.
   - They allow fine-grained control over memory and hardware resources.
   - In low-level programming, you work directly with concepts like pointers, memory addresses, and bit manipulation.

# Low-Level Programming in C

Welcome to the Low-Level Programming project! In this repository, we explore the fascinating world of C programming, diving into the nitty-gritty details of how computers work at a low level.

## Learning Objectives

### General
1. **Why C Programming Is Awesome**:
   - C is awesome because it provides unparalleled control over hardware resources.
   - It's the foundation for many other languages and systems.
   - C code is efficient and widely used in operating systems, embedded systems, and more.

2. **Inventors of C**:
   - **Dennis Ritchie** and **Ken Thompson** invented the C programming language at Bell Labs in the early 1970s.
   - **Brian Kernighan** contributed significantly to its development.

3. **What Happens When You Type `gcc main.c`**:
   - The `gcc` command invokes the GNU Compiler Collection.
   - It compiles the `main.c` source file into an executable binary.

4. **Entry Point and `main`**:
   - The **entry point** is the starting point of execution in a program.
   - In C, the `main` function serves as the entry point.
   - Execution begins from the first line of `main`.

5. **Printing Text**:
   - Use `printf` to display formatted text.
   - `puts` prints a string followed by a newline.
   - `putchar` outputs a single character.

6. **Getting the Size of a Specific Type**:
   - The unary operator `sizeof` returns the size (in bytes) of a data type.

7. **Compiling with `gcc`**:
   - Compile C code using `gcc`.
   - Example: `gcc main.c -o my_program`.

8. **Default Program Name**:
   - The default output program name is usually `a.out`.

9. **C Coding Style and `betty`**:
   - Follow the official C coding style (e.g., Betty).
   - Use `betty-style.pl` and `betty-doc.pl` to check your code.

10. **Finding the Right Header**:
    - When using standard library functions, include the appropriate header.
    - E.g., for `printf`, include `<stdio.h>`.

11. **`main` Function and Return Value**:
    - The `main` function's return value influences the program's exit status.
    - Convention: `0` for successful execution, non-zero for errors.

### Copyright - Plagiarism
- Originality is crucial. Avoid copying and pasting; create your solutions.
- Plagiarism is strictly forbidden and may result in removal from the program.

## Requirements
- **C**:
  - Editors: vi, vim, emacs
  - Compilation: Ubuntu 20.04 LTS, `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
  - Files should end with a newline.
  - README.md at the root of the repo (repository description).
  - README.md in the project folder (project description).
  - No compilation errors or warnings.
  - No use of `system`.
  - Code follows the Betty style.

- **Shell Scripts**:
  - Editors: vi, vim, emacs
  - Tested on Ubuntu 20.04 LTS.
  - All scripts should be executable (`chmod u+x script.sh`).

Happy coding! 🚀

