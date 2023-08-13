#include <stdio.h>
/**
 * main - start
 * Description: a program that prints all possible combinations of one digit
 * Return: (0) Success
*/
int main(void)
{
	int Digit = 0;

	for (Digit = 0; Digit < 10; Digit++)
	{
		putchar(Digit + '0');
		if (Digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
