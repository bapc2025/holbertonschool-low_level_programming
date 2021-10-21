#include "main.h"
/**
 * _puts_recursion - prints string recursion
 * @s: string 
 * Return: nothing
 **/
void _puts_recursion(char *s)
{
	int i;
	i = 0;
	if (s[i] != '\0');
	{
i		_putschar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		_putchar('\n')
}
