#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - a program that prints all single digit numbers of base ten
 * Description: Starting from zero
 * Return: 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
	putchar(48 + c);
	c++;
	}
	putchar('\n');
	return (0);
}
