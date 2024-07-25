#include "main.h"

/**
 * print_integer - print the integer
 * @args: the list of the arguments
 * Return: the number of characters printed
 */

int print_integer(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;
	unsigned int divisor = 1;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n; /** Convert to unsigned to handle the absolute value */
	}
	else
	{
		num = n;
	}

	/** Find the divisor to extract each digit */
	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	/** Extract and print each digit */
	while (divisor != 0)
	{
		count += _putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}
