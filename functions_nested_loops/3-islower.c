#include "main.h"


/**
 * _islower - Write a function that checks for lowercase character.
 * Return: 1 if charcter is lowercase, 0 otherwise.
 * @c: is a letter, lowercase or uppercase. 
*/


int _islower(int c) 
 
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
