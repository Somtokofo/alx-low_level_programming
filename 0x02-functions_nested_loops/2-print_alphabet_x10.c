#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Description: prints 10 times
 * Return: Always(0).
 */

void print_alphabet_x10(void)
{
	int alp_count = 0;

	while (alp_count < 10)
	{
		char ch = 'a';
		
		do {
			_putchar(ch);
			ch++;
		} while (ch <= 'z');
		
		alp_count++;
		
		_putchar('\n');
        }
}
