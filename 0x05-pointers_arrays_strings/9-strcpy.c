#include "main.h"
/**
 * *_strcpy - a function that copies the string
 * @dest: destination
 * @src: Source
 * Return: Dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
