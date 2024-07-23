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
		str[0] = ('(');
		str[1] = ('n');
		str[2] = ('u');
		str[3] = ('l');
		str[4] = ('l');
		str[5] = (')');
		str[6] = ('\0');
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
