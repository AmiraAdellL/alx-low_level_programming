#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @n: the number to get the last digit of it
 * Return: the last digit
*/

int print_last_digit(int n)
{
	int Digit;

	Digit = n % 10;
	if (Digit < 10)
	{
		Digit = Digit * -1;
	}
	_putchar(Digit + '0');
	return (Digit);
}
