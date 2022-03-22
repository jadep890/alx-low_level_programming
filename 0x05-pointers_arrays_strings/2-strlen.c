#include "main.h"
/**
 * _strlen - find the lenght of str
 * @s: place the string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
