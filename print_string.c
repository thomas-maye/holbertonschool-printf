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
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		_putchar('\0');
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
