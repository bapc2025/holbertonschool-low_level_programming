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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
