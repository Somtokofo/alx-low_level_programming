#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	i = len / 2;

	if (len % 2 != 0)
	{
		i++;

		while (i < len)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		while (i < len)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}