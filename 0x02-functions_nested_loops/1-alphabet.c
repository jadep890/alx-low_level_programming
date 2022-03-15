#include <unistd.h>
#include "main.h"

/**
 * main - prints the alphabet, in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_aphabet(void)
{
int i;
	
for(i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
