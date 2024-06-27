#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int mares = 0;

	while (s[mares] != '\0')
		mares++;

	while (mares)
		_putchar(s[--mares]);

	_putchar('\n');
}
