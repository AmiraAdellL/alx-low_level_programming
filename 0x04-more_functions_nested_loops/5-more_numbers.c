#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 * Return: nothing
*/
void more_numbers(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10)  + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
