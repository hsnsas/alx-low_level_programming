#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Description: a program that prints the numbers from 1 to 10
 * but for multiples of three print Fizz
 * for the multiples of five print Buzz
 * for both 3 and 5 print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
