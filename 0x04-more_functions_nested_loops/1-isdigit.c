#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c:the checked number
 * Return:(1) if number otherwise (0)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
