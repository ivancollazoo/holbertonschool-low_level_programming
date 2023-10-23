#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * Return: Always 0.
 * @s: string to evaluate.
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
	}
	return (i);
}
