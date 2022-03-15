#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- Print lowercase alphabets
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
