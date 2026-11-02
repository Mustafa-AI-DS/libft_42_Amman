*This project has been created as part of the 42 curriculum by mabughar.*

# Libft

## Description

Libft is a C library project from the 42 curriculum. The goal of the project is to reimplement a set of useful standard C library functions and build additional utility functions that can be reused in future C projects.

The project focuses on understanding how common C functions work internally, including character checks, string manipulation, memory manipulation, dynamic memory allocation, file-descriptor output, function pointers, and singly linked lists.

The final result is a static library named `libft.a`.

## Library Description

The library is divided into three main parts.

### Part 1 - Libc Functions

These functions reproduce the behavior of common libc functions:

- `ft_isalpha` - checks whether a character is alphabetic.
- `ft_isdigit` - checks whether a character is a decimal digit.
- `ft_isalnum` - checks whether a character is alphanumeric.
- `ft_isascii` - checks whether a value belongs to the ASCII set.
- `ft_isprint` - checks whether a character is printable.
- `ft_strlen` - returns the length of a string.
- `ft_memset` - fills a memory area with a byte value.
- `ft_bzero` - sets a memory area to zero.
- `ft_memcpy` - copies bytes between non-overlapping memory areas.
- `ft_memmove` - copies bytes safely when memory areas overlap.
- `ft_strlcpy` - copies a string while respecting the destination size.
- `ft_strlcat` - appends a string while respecting the destination size.
- `ft_toupper` - converts a lowercase letter to uppercase.
- `ft_tolower` - converts an uppercase letter to lowercase.
- `ft_strchr` - finds the first occurrence of a character in a string.
- `ft_strrchr` - finds the last occurrence of a character in a string.
- `ft_strncmp` - compares two strings up to a maximum number of characters.
- `ft_memchr` - searches for a byte in a memory area.
- `ft_memcmp` - compares two memory areas.
- `ft_strnstr` - searches for a substring within a limited number of characters.
- `ft_atoi` - converts a string to an integer.
- `ft_calloc` - allocates zero-initialized memory.
- `ft_strdup` - creates an allocated duplicate of a string.

### Part 2 - Additional Functions

These functions provide additional string, allocation, transformation, and output utilities:

- `ft_substr` - creates a substring from a string.
- `ft_strjoin` - joins two strings into a newly allocated string.
- `ft_strtrim` - removes selected characters from the beginning and end of a string.
- `ft_split` - splits a string into an array of strings using a delimiter.
- `ft_itoa` - converts an integer to a string.
- `ft_strmapi` - creates a new string by applying a function to every character.
- `ft_striteri` - applies a function to every character of a string by address.
- `ft_putchar_fd` - writes a character to a file descriptor.
- `ft_putstr_fd` - writes a string to a file descriptor.
- `ft_putendl_fd` - writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - writes an integer to a file descriptor.

### Part 3 - Linked Lists

The project also includes a singly linked-list type:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

The linked-list functions are:

- `ft_lstnew` - creates a new node.
- `ft_lstadd_front` - adds a node to the beginning of a list.
- `ft_lstsize` - counts the number of nodes in a list.
- `ft_lstlast` - returns the last node in a list.
- `ft_lstadd_back` - adds a node to the end of a list.
- `ft_lstdelone` - deletes one node and its content.
- `ft_lstclear` - deletes a node and all nodes that follow it.
- `ft_lstiter` - applies a function to the content of every node.
- `ft_lstmap` - creates a new list by applying a function to every node's content.

## Instructions

### Compilation

Compile the library with:

```bash
make
```

This creates `libft.a` at the root of the repository.

The Makefile supports the required rules:

```bash
make        # Build libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild the library from scratch
```

### Using the Library

Include the header in your C source file:

```c
#include "libft.h"
```

Then compile your program together with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the program with:

```bash
./program
```

## Resources

Useful references for this project include:

- The Libft project subject provided by 42.
- C manual pages using `man 3`, especially for functions such as `strlen`, `memcpy`, `memmove`, `calloc`, `strchr`, `strncmp`, and related libc functions.
- BSD manual documentation for functions such as `strlcpy` and `strlcat`.
- Personal test programs used to compare expected behavior and check edge cases.

### AI Usage

AI was used as a learning and review tool during this project. It was used to explain concepts such as pointers, double pointers, memory allocation, file descriptors, function pointers, linked lists, and memory management.

AI was also used to review implementations, discuss edge cases, help diagnose compilation and linker errors, explain Makefile behavior, suggest simple test cases, and clarify README requirements.

The code was reviewed and tested to make sure the behavior of each function was understood before being included in the project.
