#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * If n is greater than 15 or less than 0, the function should not print anything
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return; // Do not print anything for out-of-range values of n

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = j * i;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}