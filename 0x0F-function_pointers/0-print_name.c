#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 *
 * print_name - prints name given through given func
 * @name: name to print
 * @f: function to print with
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
