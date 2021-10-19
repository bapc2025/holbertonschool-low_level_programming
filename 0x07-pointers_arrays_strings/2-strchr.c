#include "main.h"
#include <stdio.h>
/*
 * *_strchr - locate a character in a string.
 * @s - string to search.
 * @c - character to find
 *
 * Return: pointer to first ocurrence of ther character
 * c in the string s of NULL if the character
 * is not found.
 */
char *_strchr(char *s, char c)
{

	int a;
	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}