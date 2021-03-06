#include "main.h"

/**
 * _memset - fill array s with b n number of times
 * @s: a pointer of the memory area to be filled
 * @b: character to fill the memory area
 * @n: the number of bytes to be filled
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
