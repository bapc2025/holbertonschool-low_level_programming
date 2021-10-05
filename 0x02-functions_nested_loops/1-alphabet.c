#include<main.h>
/**
 * main - write a functions that prints the alphabet, in lowercase,
 * follwed by a new line.
 * Prototype: void print_alphabet(void);
 *
 * Return: Always
 */
void print_alphabet(void)
	int main(void)
{
	print_alphabet();
	return(0);
}
/**
 * print_alphabet - prints alphabet in lowercase.
 */
void print_alphabet(void);
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
