#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - return pointer to space in memory
 *@str: string to copy
 * Return: pointer mentioned above
 */
char *_strdup(char *str)
{
char *nwstr;
int i;
int j;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
; /** strlen of str */
nwstr = (char *)malloc(sizeof(char) * (i + 1));
if (nwstr == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
nwstr[j] = str[j];
}
return (nwstr);
}
