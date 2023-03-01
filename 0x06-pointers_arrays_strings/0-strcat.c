#include "main.h"

/**
 * _strcat - program that concatenates two strings.
 * @dest: is a string
 * @src: is also another string
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
