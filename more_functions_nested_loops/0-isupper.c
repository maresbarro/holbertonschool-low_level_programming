#include "main.h"

/**
 * _isupper -check 'for uppercase character'
 * @c: character to check
 * Return: 1 if c is uppercase, o otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
