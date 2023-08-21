#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: a char
 * Return: The length of a string
*/
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
