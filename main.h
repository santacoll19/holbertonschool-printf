#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>
#include <stdarg.h>

typedef int (*format_func_ptr)(va_list);

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
