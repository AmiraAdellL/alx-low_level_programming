#include "main.h"
/**
 * print_numbers: a function that prints the numbers
 * Return: The numbers
*/
void print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
