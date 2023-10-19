#include "1-main.h"
#include <stdio.h>

/**
 * print_alphabet - function that prints the alphabet, in lowercase, followed by a new line.
 * Return: void.
*/

void print_alphabet(void)

{

	char alphabet = 'a';

	while (alphabet <= 'z')
{
	putchar(alphabet);

	alphabet++;
}

	putchar('\n');
	
}
