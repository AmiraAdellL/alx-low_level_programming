#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: The string
 * Return: Nothing
*/
void puts_half(char *str)
{
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		x = (i - 1) / 2;
		x++;
	}
	else
	{
		x = i / 2;
	}
	for (; x < i; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
