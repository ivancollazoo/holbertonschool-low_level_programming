#include "main.h"

/**
 * _print_rev_recursion - Write a function that prints
 * a string in reverse.
 * Return: Always 0.
 * @s: string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
{
	_putchar (*s);
	_print_rev_recursion(s + 1);
}
}

