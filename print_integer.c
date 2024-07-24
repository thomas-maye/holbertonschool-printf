#include "main.h"

/**
 * print_integer - print the integer
 * @args: the list of the arguments
 * Return: the number of characters printed
 */

int print_integer(va_list args)
{
	int n1;
	int j = 0;
	unsigned int n2;

	n1 = va_arg(args, int);

	if (n1 < 0)
	{
		_putchar('-');
		n2 = -n1;
		j++;
	}
	else
	{
		n2 = n1;
	}
	if (n2 / 10)
	{
		j += print_integer(args);
	}
	_putchar(n2 % 10);
	j++;

	return (j);
}
