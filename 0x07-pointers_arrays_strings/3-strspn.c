#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Retunrn: the number of bytes in the initial segment
 * of s wich consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, exit;

	for (i = 0; s[i] != '\0'; i++)
	{
		exit = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				exit = 1;
			}
		}
		if (exit == 0)
		{
			return (i);
		}
	}
	return (i);
}
