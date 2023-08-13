#include <stdio.h>
/**
 * main - Start
 * Description: a program that prints the alphabet in lowercase except 2
 * Return: (0) Success
 */

int main(void)
{

	char Letter;

	for (Letter = 'a'; Letter <= 'z'; Letter++)
	{
		if (Letter == 'q' || Letter == 'e')
		{
			Letter++;
		}
		putchar(Letter);
	}
	putchar('\n');
	return (0);
}
