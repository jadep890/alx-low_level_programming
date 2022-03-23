#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination sting.
 * @src: pointer to source sting.
 *
 * Return: pointer to source string.
 */

char *_strcat(char *dest, char *src)
{
	int lenght, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, lenght++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
