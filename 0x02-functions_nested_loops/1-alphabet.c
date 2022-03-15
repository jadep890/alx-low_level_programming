#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
void print_aphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
