#include "main.h"
/**
 * _islower - checks lowercase
 * Descritpion: a function that checks for lowercase character
 * @c: the checked character
 * Return: (1) if lowercase and (0) otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
