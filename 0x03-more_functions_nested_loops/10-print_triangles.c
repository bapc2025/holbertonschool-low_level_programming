#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: the size of the triangle.
 */
void print_triangle(int size)
{
	int hash, index;
	if (size  > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = 0; index < hash; index++)
				_putchar('#');
			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
