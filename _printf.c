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
	int i = 0, count = 0;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0' && format != NULL)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);

			f = get_format(format[i]);

			if (f != NULL)
			{
				count = count + f(args);
			}
			else
			{
				count = count + 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
