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
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] ='\0';

	return (dest);
}
