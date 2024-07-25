#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * get_format - get the selector
 * @type: to selector
 * Return: the number of the caracter printed
 */

int (*get_format(char type))(va_list)
{
	int i = 0;

	selector_t id[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	while (id[i].form_imp != '\0')
	{
		if (type == id[i].form_imp)
		{
			return (id[i].function);
		}
		i++;
	}
	
	_putchar('%');
	_putchar(type);
	
	return (0);
}
