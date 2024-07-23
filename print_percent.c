#include "main.h"
#include <stdarg.h>

/**
 * print_percent - Prints a percent sign
 * @args: the argument list
 *
 * Return: Number of characters printed.
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
