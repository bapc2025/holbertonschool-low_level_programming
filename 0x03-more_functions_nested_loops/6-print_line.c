#include "main.h"
/**
 * print_line - print a line
 * @n: leng of the line
 * Return: nothing
 **/
void print_lines(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_puthcar('\n');
}
