#include<main.h>
/**
 * main - Write a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Protorype: void print_alphabet(void);
 * you can only use _putchar twice
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints the alphaber in lowercase.
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
