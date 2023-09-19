#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int len, i, j = 0;
	char *t;

	while (*(s + len) != '\0')
	{
		len++;
	}

	j = len - 1;
	*t = "0";

	while (i < len)
	{
		*(t + i) = *(s + j);
		i++;
		j--;
	}

	for (j++; j < len; j++)
	{
		*(s + j) = *(t + j);
	}
	
}
