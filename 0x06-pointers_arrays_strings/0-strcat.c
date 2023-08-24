#include "main.h"
#include <stdio.h>
/**
 * *_strcat -  a function that concatenates two strings
 * @dest: The destination
 * @src: The source
 * Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (x = 0; src[x] != 0; x++)
	{
		dest[i] = src[x];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
