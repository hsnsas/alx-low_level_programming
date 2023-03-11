#include <stdio.h>

/**
 * main - function prints all arguments it receives.
 * @argc: argument count parameter
 * @argv: arguments parameter
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
