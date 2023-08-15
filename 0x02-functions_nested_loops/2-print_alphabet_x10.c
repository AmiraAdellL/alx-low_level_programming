#include "main.h"

/**
 * print_alphabet_x10 - Function that prints alphabet 10 times
 * Descritpion: a function that prints the alphabet, in lowercase
 *
 * Return: Always (0) Success
*/
void print_alphabet_x10(void)
{
	char Letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (Letter = 'a'; Letter <= 'z'; Letter++)
		{
			_putchar(Letter);
		}
	_putchar('\n');
	}
}
