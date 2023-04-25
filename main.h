#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(const char *s);
int print_char(const char c, int char_count);
int print_string(const char *s, int char_count);
int print_precent(const int char_count);
int print_int(int num, int char_count);
int print_char_speci(va_list args, int char_count);
int print_string_speci(va_list args, int char_count);
int print_percent_speci(int char_count);

#endif /* MAIN_H */
