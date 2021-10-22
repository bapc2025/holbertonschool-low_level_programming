#include <stdio.h>
#include "main.h"
/**
 * main - multiply by two numbers
 * @argc: arguments count
 * @argv:array of pointers
 *
 * Return: result of multiplication or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		product = product * _atoi(argv[i]);
	printf("%i\n", product);
	return (0);
}
