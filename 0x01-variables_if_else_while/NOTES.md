# 0x01. C - Variables, if, else, while

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

### man or help:

* ascii 
* scanf 
* getc
* getchar
* EOF
* EXIT_SUCCESS
* time
* rand
* srand
* RAND_MAX
* for loops, do...while loops, functions.

*What are the arithmetic operators and how to use them*
1. Arithmetic Operators:
These operators perform mathematical operations on variables.
Examples: + (addition), - (subtraction), * (multiplication), / (division), % (modulo).
Usage: result = a + b;

*What are the logical operators (sometimes called boolean operators) and how to use them*
2. Logical Operators (Boolean Operators):
Used to combine or manipulate boolean values (true or false).
Examples:
 **&& (logical AND)**
 **|| (logical OR)**
 **! (logical NOT)**.
Usage: if (condition1 && condition2) { /* code */ }

*What the the relational operators and how to use them*
3. Relational Operators:
Compare values and return boolean results.
Examples: == (equal), != (not equal), < (less than), > (greater than).
Usage: if (a < b) { /* code */ }

*What values are considered TRUE and FALSE in C*
4. TRUE and FALSE in C:
In C, 0 represents false, and any non-zero value represents true.

*What are the boolean operators and how to use them*
5. Boolean Operators:
Combine relational expressions.
Example: if (x > 0 && y < 10) { /* code */ }

*How to use the if, if ... else statements*
6. if and if … else Statements:
Conditional statements for decision-making.
Example:
if (condition) {
    // code executed if condition is true
} else {
    // code executed if condition is false
}

*How to use comments*
7. Comments:
Used for documentation and readability.
Single-line comment: // This is a comment
Multi-line comment:
/*
* This is a multi-line comment.
* It can span multiple lines.
*/

*How to declare variables of types char, int, unsigned int*
8. Variable Declaration:
Declare variables with a specific data type.
Example: int age;

*How to assign values to variables*
9. Assigning Values to Variables:
Assign values to declared variables.
Example: age = 25;

*How to print the values of variables of type char, int, unsigned int with printf*
10. Printing Variables with printf:
Display variable values.
Example: printf("Age: %d\n", age);

*How to use the while loop*
11. Using the while Loop:
Repeats a block of code while a condition is true.
Example:
while (count < 10) {
    // code to execute
    count++;
}

*What is the ASCII character set*
12. ASCII Character Set:
A standard character encoding system.
Each character represented by a unique numeric value (0 to 127).

*What are the purpose of the gcc flags -m32 and -m64*
13. gcc Flags -m32 and -m64:
-m32: Compile for 32-bit architecture.
-m64: Compile for 64-bit architecture.

### Copyright - Plagiarism

* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.

### Requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

*Ubuntu 20.04 LTS* This refers to the specific version of the Ubuntu operating system. Ubuntu 20.04 LTS (Long-Term Support) is a stable release that provides security updates and support for an extended period.
*GCC (GNU Compiler Collection)* GCC is a powerful suite of compilers for various programming languages. It includes the C compiler (gcc), C++ compiler (g++), and other language-specific compilers. In your case, we’re interested in the C compiler (gcc).
Compilation Options:
*-Wall* This flag **enables all warning messages**. It’s good practice to use this option because it helps catch potential issues in your code.
*-Werror* **Treats all warnings as errors** If any warning occurs during compilation, it will halt the process and prevent the creation of the executable.
*-Wextra* **Provides additional warning messages** beyond the standard set of warnings.
*-pedantic*This option **instructs GCC to issue warnings for code** that may not conform to the C standard.
*-std=gnu89* This option **specifies the C language standard to be used for compilation.** In this case, it's set to gnu89, which corresponds to the C language standard used in the 1989 ANSI C standard with GNU extensions.

* All your files should end with a new line
* A README.md file, at the root of the folder of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

