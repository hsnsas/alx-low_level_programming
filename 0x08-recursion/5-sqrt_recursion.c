#include "main.h"

/**
 * check - a function that returns the natural square root of a number
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: an integer value
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a
 * @n: integer to find sqrt
 *
 * Return: If n does not have a natural square root, the function should
 * return -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
