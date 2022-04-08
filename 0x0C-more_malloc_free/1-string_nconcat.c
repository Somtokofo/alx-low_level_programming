#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *strout;
	unsigned int lstr1, lstr2, lstrout, i;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	lstr1 = strlen(*str1);

	lstr2 = strlen(*str2);

	if (n > lstr2)
		n = lstr2;

	lstrout = lstr1 + n;

	strout = malloc(lstrout + 1);

	if (strout == NULL)
		return (NULL);
	
	i = 0;

	while (i < lstrout)
		if (i < lstr1)
			strout[i] = str1[i];
		else
			strout[i] = str2[i - lstr1];
		i++;

	strout[i] = '\0';

	return (strout);
}
