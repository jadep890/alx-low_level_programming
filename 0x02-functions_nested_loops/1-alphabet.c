#include <stdio.h>
#include "main.h"

/**
 * main - prints lowercase alphabets
 * Return: Always 0 (Success)
 */

void print_alphabet(void);
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
