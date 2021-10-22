#include "main.h"
/**
 * _isupper - checks the value of a upper case
 *
 * @c: cahracher to be checked.
 *
 * Return: 1 if c is capital, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
