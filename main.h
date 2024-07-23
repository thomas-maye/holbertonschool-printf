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

/**
 * struct selector - struct to select format and the function
 * @type: format specifier
 * @function: the function with the format specifier
 */
typedef struct selector
{
	char type;
	void (*function)(va_list);
} selector;

#endif
