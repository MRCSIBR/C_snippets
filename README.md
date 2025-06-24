
# Important C Code Snippets for Programmers

## A Brief Introduction to C

Welcome to the world of C! C is a powerful, general-purpose programming language developed in the early 1970s. It is one of the most influential programming languages in history and has been used to create everything from operating systems (like Linux and parts of Windows) to complex applications and embedded systems.

C is known for its:
*   **Speed:** C code compiles to fast machine code, making it ideal for performance-critical applications.
*   **Control:** It provides low-level access to memory through pointers, giving programmers fine-grained control over the hardware.
*   **Portability:** Well-written C code can be compiled for a wide variety of computer platforms and operating systems.
*   **Foundation:** Many modern languages like C++, C#, Java, and Python have borrowed syntax and concepts from C.

This guide serves as a quick reference or "cheatsheet" for the essential building blocks of the C language. Whether you're a beginner or need a quick refresher, these snippets cover the core concepts you'll use every day.

## How to Compile and Run This Code

To use these snippets, you'll need a C compiler. The most common is **GCC** (GNU Compiler Collection).

1.  **Save the Code:** Copy a code snippet and save it in a file with a `.c` extension (e.g., `hello.c`).
2.  **Open a Terminal:** Navigate to the directory where you saved the file.
3.  **Compile:** Run the following command to compile your code:
    ```bash
    gcc your_file_name.c -o output_executable_name
    ```
    For example:
    ```bash
    gcc hello.c -o hello
    ```
4.  **Run:** Execute the compiled program from your terminal:
    ```bash
    ./output_executable_name
    ```
    For example:
    ```bash
    ./hello
    ```

---

## Table of Contents

1.  [The Basics](#1-the-basics)
    *   [Program Structure](#11-basic-program-structure)
    *   [Comments](#12-comments)
    *   [Data Types](#13-basic-data-types)
    *   [Constants and Volatiles](#14-constants-and-volatiles)
2.  [Operators & Expressions](#2-operators--expressions)
    *   [Arithmetic Operations](#21-arithmetic-operations)
    *   [Assignment vs. Comparison](#22-assignment-vs-comparison)
3.  [Input & Output](#3-input--output)
    *   [Standard I/O](#31-standard-input--output)
    *   [File I/O](#32-file-io)
    *   [Error Checking](#33-error-checking)
4.  [Control Flow](#4-control-flow)
    *   [If-Else Statements](#41-if-else-statements)
    *   [Switch-Case](#42-switch-case)
    *   [For Loop](#43-for-loop)
    *   [While Loop](#44-while-loop)
    *   [Do-While Loop](#45-do-while-loop)
5.  [Functions & Program Structure](#5-functions--program-structure)
    *   [Functions](#51-functions)
    *   [Command-Line Arguments](#52-command-line-arguments)
6.  [Data Structures](#6-data-structures)
    *   [Arrays](#61-arrays)
    *   [Strings & String Functions](#62-strings--string-functions)
    *   [Structs](#63-structs)
7.  [Pointers & Memory Management](#7-pointers--memory-management)
    *   [Pointers](#71-pointers)
    *   [Dynamic Memory Allocation](#72-dynamic-memory-allocation)

---

## 1. The Basics

### 1.1. Basic Program Structure
Every C program has a `main()` function, which is the entry point of execution. The `#include <stdio.h>` directive includes the standard input/output library, giving us access to functions like `printf()`.

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0; // Indicates successful execution
}
```

### 1.2. Comments
Comments are crucial for explaining what your code does. They are ignored by the compiler.

```c
// This is a single-line comment.

/*
  This is a multi-line comment.
  It's useful for longer explanations.
*/
```

### 1.3. Basic Data Types
Variables must be declared with a specific data type, which determines the type of data they can hold.

```c
int integerVar = 10;          // For whole numbers
float floatVar = 3.14f;       // For single-precision floating-point numbers
double doubleVar = 2.71828;   // For double-precision floating-point numbers
char charVar = 'A';           // For a single character
```

### 1.4. Constants and Volatiles
The `const` keyword makes a variable read-only. `volatile` tells the compiler that a variable's value may change at any time without any action from the code the compiler sees.

```c
const int SECONDS_IN_MINUTE = 60;
volatile int sensor_reading; // Used in embedded systems, threading, etc.
```

## 2. Operators & Expressions

### 2.1. Arithmetic Operations
C supports all basic arithmetic operations.

```c
int a = 10, b = 3;
int sum = a + b;        // 13
int difference = a - b; // 7
int product = a * b;    // 30
int quotient = a / b;   // 3 (integer division truncates the result)
int remainder = a % b;  // 1 (modulo operator)
```

### 2.2. Assignment vs. Comparison
A very common bug is confusing the assignment operator (`=`) with the equality operator (`==`).

```c
int x = 5; // Assignment: set the value of x to 5

if (x == 5) { // Comparison: check if the value of x is equal to 5
    printf("x is equal to 5\n");
} else {
    printf("x is not equal to 5\n");
}
```

## 3. Input & Output

### 3.1. Standard Input & Output
Use `printf` for formatted output and `scanf` or `fgets` for input. `fgets` is generally safer than `scanf` for reading strings as it prevents buffer overflows.

```c
#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read a line of text (including newline)

    printf("Enter your age: ");
    scanf("%d", &age); // Read an integer

    printf("Hello, %sYou are %d years old.\n", name, age);
    return 0;
}
```

### 3.2. File I/O
C provides a rich set of functions for reading from and writing to files.

```c
#include <stdio.h>

int main() {
    FILE *file_pointer;

    // Write to a file
    file_pointer = fopen("data.txt", "w");
    if (file_pointer != NULL) {
        fprintf(file_pointer, "This is a test file.\n");
        fprintf(file_pointer, "Writing line 2.\n");
        fclose(file_pointer);
    }
    return 0;
}
```

### 3.3. Error Checking
Always check the return values of system calls (like `fopen` or `malloc`). If they fail, they often return `NULL` and set a global error number. `perror` can be used to print a descriptive error message.

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("non_existent_file.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit with an error code
    }
    // ... file operations ...
    fclose(file);
    return 0;
}
```

## 4. Control Flow

### 4.1. If-Else Statements
The `if-else` statement is the fundamental tool for conditional logic.

```c
int score = 85;

if (score >= 90) {
    printf("Grade: A\n");
} else if (score >= 80) {
    printf("Grade: B\n");
} else {
    printf("Grade: C or lower\n");
}
```

### 4.2. Switch-Case
A `switch` statement is a clean way to handle multiple choices based on the value of a single variable.

```c
int day = 3;
switch (day) {
    case 1: printf("Monday\n"); break;
    case 2: printf("Tuesday\n"); break;
    case 3: printf("Wednesday\n"); break;
    default: printf("Another day\n"); break;
}
```

### 4.3. For Loop
The `for` loop is ideal for repeating a block of code a specific number of times.

```c
for (int i = 0; i < 5; i++) {
    printf("Iteration %d\n", i);
}
```

### 4.4. While Loop
The `while` loop repeats a block of code as long as its condition remains true.

```c
int count = 0;
while (count < 5) {
    printf("Count: %d\n", count);
    count++;
}
```

### 4.5. Do-While Loop
The `do-while` loop is similar to a `while` loop, but it guarantees the code block is executed at least once.

```c
int num;
do {
    printf("Enter a number greater than 10: ");
    scanf("%d", &num);
} while (num <= 10);
```

## 5. Functions & Program Structure

### 5.1. Functions
Functions help organize code into reusable, logical blocks.

```c
#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);

int main() {
    int result = add(5, 3);
    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### 5.2. Command-Line Arguments
Your `main` function can receive arguments from the command line, allowing for more flexible programs. `argc` is the argument count, and `argv` is an array of argument strings.

```c
#include <stdio.h>

// Run as: ./myprogram arg1 arg2
int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
```

## 6. Data Structures

### 6.1. Arrays
An array is a collection of elements of the same data type, stored in contiguous memory locations.

```c
int numbers[5] = {10, 20, 30, 40, 50};
numbers[2] = 35; // Modify an element
printf("Element at index 2: %d\n", numbers[2]);
```

### 6.2. Strings & String Functions
In C, a string is an array of characters ending with a null terminator (`\0`). The `<string.h>` library provides essential functions for string manipulation.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";
    char str3[20];

    strcpy(str3, str1); // Copy str1 into str3
    strcat(str3, " ");  // Concatenate " " to str3
    strcat(str3, str2); // Concatenate str2 to str3

    printf("Copied string: %s\n", str3);
    printf("Length of str1: %zu\n", strlen(str1));
    return 0;
}
```

### 6.3. Structs
A `struct` (or structure) allows you to group different data types into a single, custom data type.

```c
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {10, 20};
    printf("Point coordinates: (%d, %d)\n", p1.x, p1.y);
    return 0;
}
```

### 6.4 Glib vector

```c
#include <glib.h>
#include <stdio.h>

int main() {
    GArray *array;
    int i;

    // Create a new GArray to store int values
    // Parameters: zero_terminated=FALSE, clear=FALSE, element_size=sizeof(int)
    array = g_array_new(FALSE, FALSE, sizeof(int));

    // Append integers 0 to 4 to the array
    for (i = 0; i < 5; i++) {
        g_array_append_val(array, i);
    }

    // Access and print the elements using g_array_index macro
    for (i = 0; i < array->len; i++) {
        printf("%d\n", g_array_index(array, int, i));
    }

    // Free the array and its data
    g_array_free(array, TRUE);

    return 0;
}
```

## 7. Pointers & Memory Management

### 7.1. Pointers
A pointer is a variable that stores the memory address of another variable. They are fundamental to C for direct memory manipulation and building complex data structures.

```c
int var = 10;
int *ptr = &var; // ptr stores the address of var

printf("Value of var: %d\n", var);
printf("Address of var: %p\n", (void *)ptr);
printf("Value at the address ptr points to: %d\n", *ptr); // Dereferencing
```

### 7.2. Dynamic Memory Allocation
`malloc` allocates a block of memory on the heap and returns a pointer to it. `free` releases the allocated memory, preventing memory leaks.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray;
    int size = 5;

    // Allocate memory for 5 integers
    dynamicArray = (int *)malloc(size * sizeof(int));

    if (dynamicArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 10;
        printf("dynamicArray[%d] = %d\n", i, dynamicArray[i]);
    }

    // Free the memory when done
    free(dynamicArray);
    return 0;
}
```

## Conclusion

Mastering these fundamental C code snippets is an essential step for any programmer. They form the basis of nearly every C program you will write or encounter. By understanding and practicing these concepts, you build a solid foundation for tackling more complex challenges and developing efficient, reliable software.

### Next Steps
*   **Practice:** Try to combine these snippets to build small, complete programs.
*   **Explore Data Structures:** Learn to implement linked lists, stacks, queues, and trees using structs and pointers.
*   **Study the Standard Library:** Dive deeper into libraries like `<string.h>`, `<stdlib.h>`, and `<math.h>`.
*   **Build Systems:** Learn about `make` and Makefiles for managing larger projects.
