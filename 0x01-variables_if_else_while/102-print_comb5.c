#include <stdio.h>
/**
 * main - start
 * Description: a program that prints all possible combinations of two digit
 * Return: (0) Success
*/

int main(void)
{
	int Digit, x;

	for (Digit = 0; Digit <= 99; Digit++)
	{
		for (x = Digit + 1; x <= 99; x++)
		{
			putchar((Digit / 10) + '0');
			putchar((Digit % 10) + '0');
			putchar(' ');
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');

			if (Digit < 98 || x < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
