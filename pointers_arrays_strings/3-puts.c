#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout.
 * Return: Always 0.
 *@str: to be printed.
 */

void _puts(char *str)
{
	int i;

	for (i =0; str[i] != '\0'; i++)
	{

	_putschar(str[i]);
	}
	_putchar('\n');
}