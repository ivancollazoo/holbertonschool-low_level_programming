#include "main.h"
#include <stdio.h>

/**
 * int _isupper - Write a function that checks for uppercase character.
 * Return: Always 1 if is upper c, otherwise 0.
 * @c:look at the value.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
			return (1);

		else
		return (0);
}
