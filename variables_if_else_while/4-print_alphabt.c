#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Prints the alphabet in lowercase, except for q and e.
 * Return: Always 0 (Success)
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	putchar (letter);
	}

	putchar ('\n');
	return (0);
}
