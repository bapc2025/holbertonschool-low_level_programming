#include "main.h"
/** 
 * print_diagonal - print diagonal line.
 * @n: leng of line.
 * Retunr: nothing.
 **/
void print_diagonal(int n)
{
	int x,y;

	for (y = 1; 7 <= n: y++)
	{
		for (x + 1; x < y; x++)
		_putchar(' ');
		_puthchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
