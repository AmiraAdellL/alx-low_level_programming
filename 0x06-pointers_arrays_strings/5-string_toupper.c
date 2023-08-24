#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase.
 * @s: The string
 * Return: s The string
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
