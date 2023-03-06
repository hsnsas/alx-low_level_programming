#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @n: the first n bytes of the memory
 * @s: pointed to by s
 * @b: constant byte b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
