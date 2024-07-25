#include "main.h"

/**
 * print_integer - print the integer
 * @args: the list of the arguments
 * Return: the number of characters printed
 */

int print_integer(va_list args)
{
	long int n1 = va_arg(args, int);
	int j = 0;
	long int div = 1;

	va_arg(args, int);

	if (n1 < 0)
	{
		_putchar('-');
		n1 = -n1;
		j++;
	}

	if (n1 < 10)
		return (j += _putchar(n1 + '0'));

	while (n1 / div > 9 || n1 / div < -9)
	{
		div = div * 10;
	}

	while (div != 0)
	{
		_putchar('0' + n1 / div);
		n1 = n1 % div;
		div = div / 10;
		j++;
	}

	return (j);
}
