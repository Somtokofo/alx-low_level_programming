#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch = 'a';

	do{
		_putchar(ch);
		ch++;
	}while (ch <= 'z');
	_putchar('\n');
}
