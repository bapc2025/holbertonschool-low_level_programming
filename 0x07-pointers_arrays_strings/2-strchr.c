#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a character in a string.
 * @s: string to search.
 * @c: character to find
 *
 * Return: pointer to first ocurrence of ther character
 * c in the string s of NULL if the character
 * is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			while (*(s + i))
			{
				return (s + i);
				 i = i + 1;
			}
		}
		i = i + 1;
	}
	return (NULL);
}
