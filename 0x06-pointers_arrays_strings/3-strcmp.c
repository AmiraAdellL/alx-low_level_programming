#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: Result
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (i >= 0)
	{
		result = s1[i] - s2[i];
		if (result != 0 || (s1[i] == '\0' && s2[i] == '\0'))
		{
			break;
		}
		i++;
	}
	return (result);
}
