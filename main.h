#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(const char c);
int print_string(const char *s);
int print_percent(void);
int print_arg(const char *c, va_list args);


#endif /* MAIN_H */
