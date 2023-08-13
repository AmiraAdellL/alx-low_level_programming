#include <stdio.h>
/**
 * main - start
 * Description: a program that prints the lowercase alphabet in reverse
 * Retunr: (0) Success
 */

int main(void)
{
	char Letter = 'z';

	for (Letter = 'z'; Letter >= 'a'; Letter--)
	{
		putchar(Letter);
	}
	putchar('\n');

	return (0);
}
