# 42 São Paulo Piscine 2026

## Introduction

The 42 São Paulo Piscine is an intensive 4-week programming bootcamp designed to introduce participants to the fundamentals of computer science and programming. It focuses on C programming, shell scripting, and collaborative projects, emphasizing problem-solving, coding standards, and peer learning. This documentation provides a comprehensive overview of the modules and exercises based on the submissions in this workspace.

## Overview of Modules

The Piscine is divided into several modules:

- **C00**: Introduction to pointers and basic functions in C.
- **C01**: String manipulation functions in C.
- **C02**: Array manipulation and additional pointer exercises in C.
- **Shell00**: Basic shell scripting and file system operations.
- **Shell01**: Advanced shell scripting with utilities and Git.
- **Rush**: Collaborative project implementing a 4x4 Skyscrapers puzzle solver.

Each module consists of exercises (ex00, ex01, etc.) that build upon each other, requiring implementation of specific functions or scripts.

## C00 - Introduction to Pointers

This module introduces basic concepts of pointers, memory manipulation, and simple functions in C.

### Exercises

#### ex00 - ft_ft
- **Objective**: Write a function that takes a pointer to an integer and sets the value it points to 42.
- **Files**: 
- **Function Prototype**: `void ft_ft(int *nbr);`
- **Compilation**: `gcc -Wall -Wextra -Werror  -o ft_ft`
- **Notes**: Demonstrates basic pointer dereferencing.

#### ex01 - ft_ultimate_ft
- **Objective**: Write a function that takes a pointer to a pointer to ... (9 levels) and sets the final value to 42.
- **Files**: 
- **Function Prototype**: `void ft_ultimate_ft(int *********nbr);`
- **Compilation**: `gcc -Wall -Wextra -Werror  -o ft_ultimate_ft`
- **Notes**: Tests understanding of multiple levels of indirection.

#### ex02 - ft_swap
- **Objective**: Write a function that swaps the values of two integers using pointers.
- **Files**: 
- **Function Prototype**: `void ft_swap(int *a, int *b);`
- **Compilation**: `gcc -Wall -Wextra -Werror  -o ft_swap`
- **Notes**: Introduces swapping values via pointers.

#### ex03 - ft_div_mod
- **Objective**: Write a function that computes division and modulus of two integers and stores results in pointers.
- **Files**: `ft_div_mod.c`
- **Function Prototype**: `void ft_div_mod(int a, int b, int *div, int *mod);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_div_mod.c -o ft_div_mod`
- **Notes**: Handles division and modulus operations with pointers.

#### ex04 - ft_ultimate_div_mod
- **Objective**: Write a function that computes division and modulus using pointers to the operands.
- **Files**: `ft_ultimate_div_mod.c`
- **Function Prototype**: `void ft_ultimate_div_mod(int *a, int *b);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_ultimate_div_mod.c -o ft_ultimate_div_mod`
- **Notes**: Modifies the original values via pointers.

#### ex05 - ft_putstr
- **Objective**: Write a function that prints a string to standard output.
- **Files**: `ft_putstr.c`
- **Function Prototype**: `void ft_putstr(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_putstr.c -o ft_putstr`
- **Notes**: Uses write() system call for output.

#### ex06 - ft_strlen
- **Objective**: Write a function that returns the length of a string.
- **Files**: `ft_strlen.c`
- **Function Prototype**: `int ft_strlen(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_strlen.c -o ft_strlen`
- **Notes**: Implements string length calculation manually.

## C01 - String Manipulation

This module focuses on implementing common string manipulation functions in C.

### Exercises

#### ex00 - ft_strcpy
- **Objective**: Write a function that copies a string from source to destination.
- **Files**: 
- **Function Prototype**: `char *ft_strcpy(char *dest, char *src);`
- **Compilation**: `gcc -Wall -Wextra -Werror  -o ft_strcpy`
- **Notes**: Similar to standard strcpy, copies until null terminator.

#### ex01 - ft_strncpy
- **Objective**: Write a function that copies up to n characters from source to destination.
- **Files**: `ft_strncpy.c`
- **Function Prototype**: `char *ft_strncpy(char *dest, char *src, unsigned int n);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_strncpy.c -o ft_strncpy`
- **Notes**: Handles partial string copying.

#### ex02 - ft_str_is_alpha
- **Objective**: Write a function that checks if a string contains only alphabetic characters.
- **Files**: `ft_str_is_alpha.c`
- **Function Prototype**: `int ft_str_is_alpha(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_str_is_alpha.c -o ft_str_is_alpha`
- **Notes**: Returns 1 if all characters are letters, 0 otherwise.

#### ex03 - ft_str_is_numeric
- **Objective**: Write a function that checks if a string contains only numeric characters.
- **Files**: `ft_str_is_numeric.c`
- **Function Prototype**: `int ft_str_is_numeric(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_str_is_numeric.c -o ft_str_is_numeric`
- **Notes**: Returns 1 if all characters are digits, 0 otherwise.

#### ex04 - ft_str_is_lowercase
- **Objective**: Write a function that checks if a string contains only lowercase letters.
- **Files**: `ft_str_is_lowercase.c`
- **Function Prototype**: `int ft_str_is_lowercase(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_str_is_lowercase.c -o ft_str_is_lowercase`
- **Notes**: Returns 1 if all characters are lowercase, 0 otherwise.

#### ex05 - ft_str_is_uppercase
- **Objective**: Write a function that checks if a string contains only uppercase letters.
- **Files**: `ft_str_is_uppercase.c`
- **Function Prototype**: `int ft_str_is_uppercase(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_str_is_uppercase.c -o ft_str_is_uppercase`
- **Notes**: Returns 1 if all characters are uppercase, 0 otherwise.

#### ex06 - ft_str_is_printable
- **Objective**: Write a function that checks if a string contains only printable characters.
- **Files**: `ft_str_is_printable.c`
- **Function Prototype**: `int ft_str_is_printable(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_str_is_printable.c -o ft_str_is_printable`
- **Notes**: Returns 1 if all characters are printable (ASCII 32-126), 0 otherwise.

#### ex07 - ft_strupcase
- **Objective**: Write a function that converts a string to uppercase.
- **Files**: `ft_strupcase.c`
- **Function Prototype**: `char *ft_strupcase(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_strupcase.c -o ft_strupcase`
- **Notes**: Modifies the string in place and returns it.

#### ex08 - ft_strlowcase
- **Objective**: Write a function that converts a string to lowercase.
- **Files**: `ft_strlowcase.c`
- **Function Prototype**: `char *ft_strlowcase(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_strlowcase.c -o ft_strlowcase`
- **Notes**: Modifies the string in place and returns it.

#### ex09 - ft_strcapitalize
- **Objective**: Write a function that capitalizes the first letter of each word in a string.
- **Files**: `ft_strcapitalize.c`
- **Function Prototype**: `char *ft_strcapitalize(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_strcapitalize.c -o ft_strcapitalize`
- **Notes**: Capitalizes after spaces, punctuation, etc.

#### ex10 - ft_strlcpy
- **Objective**: Write a function that copies up to size-1 characters from source to destination with null termination.
- **Files**: `ft_strlcpy.c`
- **Function Prototype**: `unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_strlcpy.c -o ft_strlcpy`
- **Notes**: Returns the length of the source string.

#### ex11 - ft_putstr_non_printable
- **Objective**: Write a function that prints a string, replacing non-printable characters with hexadecimal escape sequences.
- **Files**: `ft_putstr_non_printable.c`
- **Function Prototype**: `void ft_putstr_non_printable(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_putstr_non_printable.c -o ft_putstr_non_printable`
- **Notes**: Non-printable characters (ASCII < 32 or > 126) are printed as \xx.

## C02 - Arrays and Advanced Pointers

This module builds on C00 and C01, focusing on array manipulation and more complex pointer operations.

### Exercises

#### ex00 - ft_ft
- **Objective**: Same as C00 ex00.
- **Files**: 
- **Function Prototype**: `void ft_ft(int *nbr);`
- **Compilation**: `gcc -Wall -Wextra -Werror  -o ft_ft`
- **Notes**: Review of basic pointers.

#### ex01 - ft_ultimate_ft
- **Objective**: Same as C00 ex01.
- **Files**: 
- **Function Prototype**: `void ft_ultimate_ft(int *********nbr);`
- **Compilation**: `gcc -Wall -Wextra -Werror  -o ft_ultimate_ft`
- **Notes**: Review of multiple indirection.

#### ex02 - ft_swap
- **Objective**: Same as C00 ex02.
- **Files**: 
- **Function Prototype**: `void ft_swap(int *a, int *b);`
- **Compilation**: `gcc -Wall -Wextra -Werror  -o ft_swap`
- **Notes**: Review of swapping via pointers.

#### ex03 - ft_div_mod
- **Objective**: Same as C00 ex03.
- **Files**: `ft_div_mod.c`
- **Function Prototype**: `void ft_div_mod(int a, int b, int *div, int *mod);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_div_mod.c -o ft_div_mod`
- **Notes**: Review of division and modulus.

#### ex04 - ft_ultimate_div_mod
- **Objective**: Same as C00 ex04.
- **Files**: `ft_ultimate_div_mod.c`
- **Function Prototype**: `void ft_ultimate_div_mod(int *a, int *b);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_ultimate_div_mod.c -o ft_ultimate_div_mod`
- **Notes**: Review of modifying via pointers.

#### ex05 - ft_putstr
- **Objective**: Same as C00 ex05.
- **Files**: `ft_putstr.c`
- **Function Prototype**: `void ft_putstr(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_putstr.c -o ft_putstr`
- **Notes**: Review of string output.

#### ex06 - ft_strlen
- **Objective**: Same as C00 ex06.
- **Files**: `ft_strlen.c`
- **Function Prototype**: `int ft_strlen(char *str);`
- **Compilation**: `gcc -Wall -Wextra -Werror ft_strlen.c -o ft_strlen`
- **Notes**: Review of string length.

#### ex07 - ft_rev_int_tab
- **Objective**: Write a function that reverses the elements of an integer array.
- **Files**: 
- **Function Prototype**: `void ft_rev_int_tab(int *tab, int size);`
- **Compilation**: `gcc -Wall -Wextra -Werror  -o ft_rev_int_tab`
- **Notes**: Reverses the array in place using pointers.

## Shell00 - Basic Shell Scripting

This module introduces basic shell commands, file creation, permissions, and simple scripts.

### Exercises

#### ex00 - z
- **Objective**: Create an empty file named `z`.
- **Files**: `z`
- **How to run**: `touch z`
- **Notes**: Simple file creation.

#### ex01 - testShell00
- **Objective**: Create a file named `testShell00` with specific permissions (755).
- **Files**: `testShell00`
- **How to run**: `touch testShell00; chmod 755 testShell00`
- **Notes**: File with executable permissions.

#### ex02 - Directories
- **Objective**: Create directories `test0` to `test5` and subdirectories as specified.
- **Files**: `test0/`, `test1/`, `test2/`, `test3/`, `test4/`, `test5/`, `test0/test2/`, `test0/test4/`
- **How to run**: `mkdir -p test0/test2 test0/test4 test1 test3 test4 test5`
- **Notes**: Directory structure creation.

#### ex03 - id_rsa_pub
- **Objective**: Create a file named `id_rsa_pub` with specific content (SSH public key format).
- **Files**: `id_rsa_pub`
- **How to run**: `echo "ssh-rsa AAA... user@host" > id_rsa_pub`
- **Notes**: Simulates an SSH public key file.

#### ex04 - midLS
- **Objective**: Create a script that lists files with modification time, sorted by time, comma-separated.
- **Files**: 
- **How to run**:  (after `chmod +x midLS`)
- **Content**: `ls -tmp`
- **Notes**: Uses `ls -t` for time sort, `-m` for comma separation, `-p` for directory indicators.

#### ex05 - 
- **Objective**: Create a script that displays the last 5 commit hashes.
- **Files**: 
- **How to run**: 
- **Content**: `git log -5 --format="%H"`
- **Notes**: Uses Git log with custom format.

#### ex06 - git_ignore.sh
- **Objective**: Create a script that displays ignored files in the Git repository.
- **Files**: `git_ignore.sh`
- **How to run**: `./git_ignore.sh`
- **Content**: `git status --ignored --porcelain | grep '^!!' | cut -d' ' -f2`
- **Notes**: Lists files ignored by .gitignore.

## Shell01 - Advanced Shell Scripting

This module covers more advanced shell scripting, including user groups, file searching, and counting.

### Exercises

#### ex01 - 
- **Objective**: Create a script that prints the groups of the user $FT_USER, comma-separated.
- **Files**: `print_groups.sh`
- **How to run**: `./print_groups.sh`
- **Content**: `id -nG $FT_USER | tr ' ' ',' | tr -d '\n'`
- **Notes**: Uses `id` command and text processing.

#### ex02 - find_sh.sh
- **Objective**: Create a script that finds all .sh files in the current directory and subdirectories.
- **Files**: `find_sh.sh`
- **How to run**: `./find_sh.sh`
- **Content**: `find . -name "*.sh" -type f -exec basename {} \; | sed 's/\.sh$//' | sort -r`
- **Notes**: Uses `find` and `sed` for file listing.

#### ex03 - count_files.sh
- **Objective**: Create a script that counts the number of files and directories in the current directory.
- **Files**: `count_files.sh`
- **How to run**: `./count_files.sh`
- **Content**: `ls -1 | wc -l`
- **Notes**: Simple file counting.

#### ex04 - MAC.sh
- **Objective**: Create a script that displays the MAC address of the machine.
- **Files**: `MAC.sh`
- **How to run**: `./MAC.sh`
- **Content**: `ifconfig | grep ether | awk '{print $2}'`
- **Notes**: Extracts MAC address from network interfaces.

#### ex05 - "\?$*'MaRViN'*$?\"
- **Objective**: Create a file with a complex name and specific content.
- **Files**: `"\?$*'MaRViN'*$?\"`
- **How to run**: `echo "42" > "\?$*'MaRViN'*$?\"`
- **Notes**: Handling special characters in filenames.

## Rush - 4x4 Skyscrapers Solver

This is a collaborative project to implement a solver for the 4x4 Skyscrapers puzzle.

### Description
The Skyscrapers puzzle requires filling a 4x4 grid with numbers 1-4, ensuring no repeats in rows/columns, and matching visibility counts from each side.

### Files
- `main.c`: Entry point, initializes and calls solving functions.
- `ft_generate_board.c`: Backtracking algorithm to solve the puzzle.
- `ft_get_numbers.c`: Parses input string into visibility array.
- `ft_verify.c`: Checks if the solution meets visibility rules.
- `ft_linecheck.c`: Calculates visible buildings for each line.
- `ft_print_board.c`: Prints the solved grid.
- `ft_putchar.c`: Utility to print a character.
- `ft_putstr.c`: Utility to print a string.

### Compilation
```bash
gcc -o rush01 *.c
```

### Usage
```bash
./rush01 "4 3 2 1 1 2 3 4 4 3 2 1 1 2 3 4"
```
Input: 16 numbers (1-4) for top, bottom, left, right visibilities.

### Notes
- Uses backtracking to find a valid solution.
- Ensures no duplicates in rows/columns.
- Validates against visibility constraints.