#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: character assigned to check
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
