#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *  _strdup - copies the string.
 *  @str: string to duplicate
 *  return: pointer to the copied string (success), NULL (error)
 */
char *_strdup(char *str)
{
	int x;
	int y;
	char *a;

	y = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[y] != '\0')
	{
		y++;
	}

	a = malloc(y * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0 ; x < y ; x++)
	{
		a[x] = str[x];
	}

	return (a);

}
