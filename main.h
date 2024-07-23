#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h> /** For the _putchar to use write */

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);
int (*get_format(char type))(va_list);

/**
 * struct selector - struct to select format and the function
 * @form_imp: format specifier
 * @function: the function with the format specifier
 */

typedef struct selector
{
	char form_imp;
	int (*function)(va_list);
} selector_t;

#endif
