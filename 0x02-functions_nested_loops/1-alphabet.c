#include <unistd.h>
#include "main.h"

/**
 * main - prints the alphabet, in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
