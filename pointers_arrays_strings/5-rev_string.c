#include "main.h"

/**
 *rev_string -Write a function that prints a string, in reverse,
 *followed by a new line.
 *@s: an input string
 *Return: Nothing
 */

void rev_string(char *s)
	{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
