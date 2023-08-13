#include <stdio.h>
/**
 * main - Start
 * Description: A program that prints the alphabet in lowercase and uppercase
 * Return: (0) Success
 */
int main(void)
{
	char Letter;
	char LetterBig;

	for (Letter = 'a'; Letter <= 'z'; Letter++)
	{
		putchar(Letter);
	}

	for (LetterBig = 'A'; LetterBig <= 'Z'; LetterBig++)
	{
		putchar(LetterBig);
	}

	putchar('\n');
	return (0);
}
