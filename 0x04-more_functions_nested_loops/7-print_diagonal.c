#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line
 * @n: the number of lines
 * Return: nothing
*/
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(32);
			}
			_putchar(98);
			_putchar('\n');
		}
	}
}
