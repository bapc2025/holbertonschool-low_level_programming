#include "main.h"
/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Retunrn: the number of bytes in the initial segment
 * of s wich consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; accept[b] != '\0'; b++)
	{
		if (s[a] == accept[b])
		{
			c++;
		}
	}
		if (c - 1 != a)
			break;
	}
	return (c);
}
