#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * Return: the length of the string.
 * @s: string to evaluate.
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
