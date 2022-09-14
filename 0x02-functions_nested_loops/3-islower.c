#include "main.h"

/**
 * _islower - is the character lowercase?
 * @c: the character code to evaluate
 *
 * Return: 1 (if c is lowercase) or 0 (not lowercase)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
