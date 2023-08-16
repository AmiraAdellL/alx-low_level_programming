#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: Nothing
*/

void times_table(void)
{
	int n, multi, equal;

	for (n = 0; n <= 9; n++)
	{
		_putchar ('0');
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			equal = n * multi;
			if (equal <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((equal / 10) + '0');
			}
			_putchar((equal % 10) + '0');
		}
		_putchar('\n');
	}

}
