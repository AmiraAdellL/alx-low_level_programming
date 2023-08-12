#include <stdio.h>
/**
 * main - Start
 * Description: A program that prints the alphabet in lowercase
 * Return (0) Success
*/
int main(void)
{
	char Letter;

	for (Letter = 'a'; Letter <= 'z'; Letter++)
	{
		putchar(Letter);
		putchar('\n');
	}
	return (0);
}
