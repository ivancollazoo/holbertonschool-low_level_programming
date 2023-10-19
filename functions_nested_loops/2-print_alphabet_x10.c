#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - 10 times the alphabet, in lowercase, followed by a new line.
 * Return: void.
*/

void print_alphabet_x10(void)

{
	int i = 0;
	while(i < 10)
{
	char letters = 'a'; 
	while(letters <= 'z')
	{
	putchar(letters);
	++letters;
}

	putchar ('\n');
	++i
	}
}
