#include "main.h"

/**
 * _isupper - determine if a character is a uppercase
 * @c: the integer representing the ASCII code of the character
 *
 * Return:1 (uppercase) or 0 (not uppercase)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
