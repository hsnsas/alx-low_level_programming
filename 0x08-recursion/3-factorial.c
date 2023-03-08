#include "main.h"

/**
 * factorial - a function that returns factoriall of the given number
 * @n: is an integer
 *
 * Return: 0, 1 or -1
 */
int factorial(int n)
{
	int b;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		b = n * factorial(n - 1);
	}
	return (b);
}
