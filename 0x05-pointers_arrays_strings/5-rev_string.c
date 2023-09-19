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
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	int j = len - 1;
	int i = 0;
	char *t = NULL;

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
