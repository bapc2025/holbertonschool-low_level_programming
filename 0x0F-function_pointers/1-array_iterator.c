#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function
 * ReturnL void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (action)
	{
		if (array)
		{
			for (; i < size; i++)
			action(array[i]);
		}
	}
}
