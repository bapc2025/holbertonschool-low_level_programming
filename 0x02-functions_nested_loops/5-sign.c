#include "main.h"

/**
 * print_sign - prints sign of a number.
 * @n: number sign printed.
 *
 * return: 1 if the number is greater than zero,
 * 0 if the number is zero,
 * -1 if the number is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if
	{
		_putchar('-');
		return (-1);
	}
	else 
	{
		_putchar('-');
		return ('/');
	}
}
