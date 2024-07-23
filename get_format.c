#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * get_format - get the selector
 * @type: to selector
 * @arg: the list of argument
 * Return: the number of the caracter printed
 */

void get_format(char type, va_list arg)
{
	int i = 0;

	selector id[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	while (id[i].type != '\0')
	{
		if (type == id[i].type)
		{
			return (id[i].function(args));
		}
		i++;
	}
	return (2);
}
