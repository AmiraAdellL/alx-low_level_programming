#include "main.h"
/**
 * *_strncpy - a function that copies a string
 * @dest: Destination
 * @src: Source
 * @n: The number of characters to be copied from src
 * Return: Destination
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
