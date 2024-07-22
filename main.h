#ifndef main.h
#define main.h

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h> /** For the _putchar to use write */

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);

#endif
