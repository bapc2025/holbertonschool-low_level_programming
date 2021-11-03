#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - name to be printed
 * @name: name to be printed
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
