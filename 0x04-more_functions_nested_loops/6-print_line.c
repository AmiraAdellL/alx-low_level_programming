#include "main.h"
/**
 * print_line - a function that draws a straight line
 * @n: The number of lines
 * Return: nothing
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
