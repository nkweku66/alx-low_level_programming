# 0x0E-structures_typedef

This directory contains C programs that demonstrate the usage of structures and typedefs in the C programming language.

## Files

1. **dog.h** - Header file that defines a structure called `struct dog` representing information about a dog, such as its name, age, and owner.

2. **1-init_dog.c** - C source file that contains a function `init_dog` to initialize a `struct dog` with provided values.

3. **2-print_dog.c** - C source file that contains a function `print_dog` to print the contents of a `struct dog`.

4. **4-new_dog.c** - C source file that contains a function `new_dog` to create a new `struct dog` with dynamically allocated memory for name and owner strings.

5. **5-free_dog.c** - C source file that contains a function `free_dog` to free the memory allocated for a `struct dog`.

## Usage

To compile and run the programs in this directory, use a C compiler such as `gcc`. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o my_program
./my_program

## Author

Nana Obeng