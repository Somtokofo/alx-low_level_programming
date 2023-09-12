#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		_putchar(chr);
		chr++;
	}
	_putchar('\n');
}
