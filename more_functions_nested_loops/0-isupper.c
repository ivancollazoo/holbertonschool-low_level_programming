#include "main.h"
#include <stdio.h>

/**
 *_isupper - Write a function that checks for uppercase character.
 * Return: Always 1 if is upper c,  0 otherwise.
 * @c: the character to be checked.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	else
	return (0);
}
