#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Description: prints 10 times
 * Return: Always(0).
 */

void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		char chr = 'a';
		while (chr <= 'z')
		{
			_putchar(chr);
			chr++;
		}
		_putchar('\n');
	}
}
