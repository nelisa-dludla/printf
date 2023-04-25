#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(const char c, int char_count);
int print_string(const char *s, int char_count);
int print_percent(const int char_count);
int print_arg(const char *format, va_list args, int char_count);


#endif /* MAIN_H */
