#include <stdio.h>
/**
 * main - Print the number of arguments passed into it.
 * @argc: the number of arguments
 * @argv: array to be printed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
