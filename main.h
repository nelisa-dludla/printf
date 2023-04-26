#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_char(const char c);
int print_string(const char *s);
int print_percent(void);
int print_arg(const char *c, va_list args);
int print_int(int num);

#endif /* MAIN_H */
