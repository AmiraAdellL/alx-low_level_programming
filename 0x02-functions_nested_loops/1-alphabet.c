#include "main.h"

/**
 * main - start
 * Descritpion: a function that prints the alphabet, in lowercase
 *
 * Return: Always (0) Success
*/
void print_alphabet(void)
{
	char Letter;

	for (Letter = 'a'; Letter <= 'z'; Letter++)
	{
		_putchar(Letter);
	}

	_putchar('\n');
}
