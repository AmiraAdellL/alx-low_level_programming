#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: The char of string
 * Return: Nothing
*/
void puts2(char *str)
{
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (x = 0; x < i; x+=2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
