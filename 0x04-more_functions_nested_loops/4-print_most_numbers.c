#include "main.h"
/**
 * print_most_numbers -  a function that prints the numbers, from
 * Return: nothing
*/
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
		{
			continue;
		}
		else
		{
			_putchar(number + '0');
		}
	}
	_putchar('\n');
}
