#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of charavters
 * @size: size of array
 * @c: char to initialized with
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)

{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
		return (0);
	for (i = 0; i< size; i++)
		*(p + i) = c;
	return (p);
}
