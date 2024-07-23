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

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				length = length + get_format(format[i + 1], args);
				i++;
			}
			else
			{
				return (-1);
			}
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
