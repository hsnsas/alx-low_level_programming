#include "main.h"

/**
 * _strlen_recursion - return length of the string
 * @s: is the string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
