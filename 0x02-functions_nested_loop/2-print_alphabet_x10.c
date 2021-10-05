#include<stdio.h>
/**
 * main - prints 10 times the aplhabet, in lowercase
 * folled by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return(0);
}
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times.
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
