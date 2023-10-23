#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integers.
 *Return: Always 0.
 * @a: changing the value.
 * @b: changing the value.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}

