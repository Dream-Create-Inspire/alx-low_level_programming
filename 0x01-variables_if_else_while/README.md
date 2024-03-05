# 0x01. C - Variables, if, else, while

## Variables

Variables are named memory locations used to store data.
Each variable has a data type (e.g., int, float, char) that determines the kind of value it can hold.

Example:

```C
int age; // Declare an integer variable named 'age'
age = 25; // Assign a value to 'age'
```

## if Statements

The if statement allows conditional execution of code.
Syntax:

```C if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}

```C 
int number = 10;
if (number > 0) {
    printf("Number is positive.\n");
} else {
    printf("Number is non-positive.\n");
}
```

## Loops (While Loop)

Loops allow you to repeat a block of code multiple times.
The while loop continues executing as long as a specified condition is true.

Syntax:

```C
while (condition) {
    // Code to execute repeatedly
}
```

Example:

```C
int i = 0;
while (i < 5) {
    printf("Iteration %d\n", i);
    i++; // Increment i
}
```

