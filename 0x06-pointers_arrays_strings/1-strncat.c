#include "main.h"
#include <stdio.h>
/**
 * *_strncat - a function that concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: the number takes from src
 * Return: destination
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (x = 0; src[x] != 0 && x < n; x++)
	{
		dest[i] = src[x];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
