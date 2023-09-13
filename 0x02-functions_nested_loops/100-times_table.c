#include "main.h"

/**
 * times_table - prints the n times table, starting with 0
 * If n is greater than 15 or less than 0 the function should not print anything
 */

void print_times_table(int n)
{
	int i, j, k = 0;
	while (!(n < 0 || n > 15))
	{
		while (i < n+1)
		{
			for (; j < n+1; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				}

				if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
			i++;
		}
	}
}