#include "main.h"

/**
 * _isupper - check for upper case character
 * @c: character that is checked
 * Return: 0 if successful
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
