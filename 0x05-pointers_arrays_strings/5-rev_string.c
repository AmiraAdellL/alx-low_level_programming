#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: The char string
 * Return: Nothing
*/
void rev_string(char *s)
{
	int i = 0, x, y;
	char *a, b;

	a = s;

	while (s[i] != '\0')
	{
		i++;
	}
	for (x = 1; x < i; x++)
	{
		a++;
	}
	for (y = 0; y < (i / 2); y++)
	{
		b = s[i];
		s[i] = *a;
		*a = b;
		a--;
	}
}
