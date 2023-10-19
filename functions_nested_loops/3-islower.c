#include "main.h"
#include <stdio.h>

/**
 * _islower - Write a function that checks for lowercase character.
 * Return: 1 if charcter is lowercase, 0 otherwise.
 * @c: the character to be checked.
 *
*/


void printResult(int result) {
    if (result) {
        putchar('1');
    } else {
        putchar('0');
    }
}

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char character = 'a';
    int result = _islower(character);
    printResult(result);
    
    return 0;
}


