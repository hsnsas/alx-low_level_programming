/**
 * main - a C program that prints exactly
 * Description: and that piece of art is useful
 * Return: 1 (success)
 */
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
