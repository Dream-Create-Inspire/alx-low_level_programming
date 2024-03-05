# Low-Level Programming in C

Welcome to the Low-Level Programming project! In this repository, we explore the fascinating world of C programming, diving into the nitty-gritty details of how computers work at a low level.

## Learning Objectives

### Man or help
1. gcc (GNU Compiler Collection)
Description: The GNU Compiler Collection (gcc) is a compiler system that supports various programming languages, including C, C++, and others.
Usage: It is commonly used to compile C programs into executable files.
2. printf (3)
Description: The printf function is part of the C standard library. It is used to print formatted output to the console.
Section Reference: The (3) in the name refers to the section of the manual where the printf function is documented.
3. puts
Description: The puts function is another C standard library function. It is used to print a string to the console, followed by a newline character (\n).
4. putchar
Description: The putchar function is yet another C standard library function. It is used to print a single character to the console.
Additional Information
If you require more detailed information about any of these functions, you can use the man command followed by the name of the command or function. For example, running man printf will display the manual page for the printf function.

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

Feel free to adapt this README to your specific project. Happy coding! 🚀

