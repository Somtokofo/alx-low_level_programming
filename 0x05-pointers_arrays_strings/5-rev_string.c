/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int len = 0, i = 0, j;
	char *t, temp;

	while (s[len] != '\0')
	{
		len++;
	}

	t = s;

	
	j = len - 1;

	while (i < j)
	{
		temp = t[i];
		t[i] = t[j];
		t[j] = temp;
		i++;
		j--;
	}

	for (i = 0; i < len; i++)
	{
		s[i] = t[i];
	}
}
