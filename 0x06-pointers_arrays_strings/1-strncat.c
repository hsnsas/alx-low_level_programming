#include "main.h"

/**
 * _strncat - program that concatenates two strings
 * @src: The source of strings src
 * @dest: The destination of the string dest
 * @n: The length of integer
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		continue;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

