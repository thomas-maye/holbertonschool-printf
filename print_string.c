#include "main.h"

/**
 * print_string - the function that print a string
 * @args: the list of argument
 * Return: the length of the string
 */

int print_string(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str[1] = ('(');
		str[2] = ('n');
		str[3] = ('u');
		str[4] = ('l');
		str[5] = ('l');
		str[6] = (')');
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
