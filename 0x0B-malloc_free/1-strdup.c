#include "main.h"
#include <stdlib.h>
/**
 *  _strdup - copies the string given as parameter
 *  @str: string to duplicate
 *  return: pointer to the copied string (success), NULL (error)
 */
char *_strdup(char *str)
{
	char *s;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	s = malloc(sizeof(char) + 1 * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
