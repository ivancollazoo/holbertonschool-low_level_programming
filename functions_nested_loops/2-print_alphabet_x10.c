#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - 10 times the alphabet, in lowercase, followed by a new line.
 * Return: void.
*/

void print_alphabet_x10(void)

{
	for (int i = 0; i < 10; ++i)
{
	for (char letters = 'a'; letters <= 'z'; ++letters)
	{
	putchar(letters);

}

	putchar ('\n');
	}
}
