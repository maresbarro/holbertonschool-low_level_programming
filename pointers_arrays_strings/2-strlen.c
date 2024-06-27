#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int mares = 0;

	while (s[mares] != '\0')
		mares++;
	return (mares);
}
