#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int num;


		for (num = 0; num <= 9; num++)
	{
		if (num != 4 && num != 2)

		_putchar ((num % 10) + '0');
	}
			_putchar ('\n');
	}
