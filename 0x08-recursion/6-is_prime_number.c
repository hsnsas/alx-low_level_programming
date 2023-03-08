#include "main.h"

/**
 * check - checks to see if number is prime or not
 * @x: integer 1
 * @y: integer 2
 *
 * Return: 1 if the number is prime else 0.
 */
int check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}

/**
 * is_prime_number - states if number is prime number
 * @n: an integer
 *
 * Return: an integers
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
