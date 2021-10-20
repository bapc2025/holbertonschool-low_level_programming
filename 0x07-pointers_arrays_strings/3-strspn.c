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
	int count = 0;
	char *p = accept;

	while (*s != '\0')
	{
		for (accept = p; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
		}
		if (*accept == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
