#include "main.h"

/**
 * main - entry point
 * Description: a function that checks for alphabetic character.
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
