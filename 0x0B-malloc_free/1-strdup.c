#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *db;
	unsigned int len, i;

	i = 0;
	len == 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	db = malloc(sizeof(char) * (len + 1));

	if (db == NULL)
		return(NULL);

	while (str[i])
		db[i] = str[i];
		i++;

	return(db);
}
