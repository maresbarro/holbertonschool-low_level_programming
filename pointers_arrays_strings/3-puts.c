#include "main.h"

/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int barro = 0;

	while (str[barro] != '\0')
	{
		_putchar(str[barro]);
		barro++;
	}
	_putchar('\n');
}
