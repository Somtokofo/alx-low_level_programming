#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *b_haystack;
	char *p_needle;

	while (*haystack != '\0')
	{
		b_haystack = haystack;
		p_needle = needle;

		while (*haystack != '\0' && *p_needle != '\0' && *haystack == *p_needle)
		{
			haystack++;
			p_needle++;
		}
		if (!*p_needle)
			return (b_haystack);
		haystack = b_haystack + 1;
	}
	return (0);
}
