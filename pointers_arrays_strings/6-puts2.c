#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: to print every other character.
 */

void puts2(char *str)
{
	int len, i;                          //two interger variables, len and i are declared, and len is initialized to 0.


	len = 0;

	while (str[len] != '\0')             /**This while loop calculates the length of the input string str.
										  * It iterates through the characters in the string until it finds the null terminator '\0',
										  * which marks the end of the string. The loop increments the len variable with each character,
										  * effectively counting the number of characters in the string.
	                                      */
	{
	len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
