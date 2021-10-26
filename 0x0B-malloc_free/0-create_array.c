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
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
