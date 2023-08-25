#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @s: The string
 * Return: The string
*/
char *leet(char *s)
{
	char a[] = "aeot1AEOTL";
	char b[] = "4307143071";

	int i = 0;
	int x = 0;

	while (*(s + i) != '\0')
	{
		for (x = 0; x <= 9; x++)
		{
			if (*(s + i) == a[x])
			{
				*(s + i) = b[x];
			}
		}
		i++;
	}
	return (s);
}
