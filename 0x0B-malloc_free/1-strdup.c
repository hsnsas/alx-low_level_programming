#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * @str: string to copy
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	unsigned int x, y;
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)

	pointer = malloc(x * sizeof(char));

	if (pointer == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
	{
		pointer[y] = str[y];
	}
	return (pointer);
}
