#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - function that prints with the good format
 * @format: pointer to the string
 * Return: the number of caracters
 */

int _printf(const char *format, ...)
{
	int length = 0;
	int i = 0;
	va_list args;


	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0' && format != NULL)
	{
		if (format[i] == '%')
		{
			length = length + get_format(format[i + 1], args);
			i++;
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
		i++;
	}
	va_end(args);
	return (length);
}
