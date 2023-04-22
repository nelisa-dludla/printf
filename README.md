# C - printf

In this project, my partner and I recreated our own printf function.

## Info

- All files were compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style. It was checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- Use of global variables was not allowed
- No more than 5 functions per file
- The only authorized functions and marcos are `write`, `malloc`, `free`, `va_start`. `va_end`, `va_copy` and `va_arg`
- The prototypes of all functions are included in the header file called `main.h`
- Header file is include guarded

## Task

`_printf.c` - a function that produces output according to a format

- Prototype: `int _printf(const char *format, ...);`
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- `format` is a character string. The format string is composed of zero or more directives

Handles the following conversion specifiers:

- c
- s
- %
- d
- i

Does not handle:

- flag characters
- field width
- precision
- length modifiers

