#include "main.h"

/**
 * reverse_array - reverses content of array of integers
 * @a: describes the array
 * @n: describes the integers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, c;

	i=0;
	while ((i < (n - 1) / 2))
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
		i++;
	}
}
