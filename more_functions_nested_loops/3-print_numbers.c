#include "main.h"

/**
 *
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0
 *
 */

void print_numbers(void)
{
	int number = '0';

	while (number <= '9')
	{
		_putchar(number++);
	}
	_putchar ('\n');
}
