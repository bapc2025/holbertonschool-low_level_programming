#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: counts of arguments
 * @argv:array of pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void)*argv;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
