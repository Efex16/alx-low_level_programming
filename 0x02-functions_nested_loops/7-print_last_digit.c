#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print last digit in a number
 * @n: the integer number that is to be worked on
 *
 * Return: last digit of 'n'
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		unsigned int temp = n == INT_MIN ? ((unsigned int)-(INT_MIN + 1) + 1U : (unsigned int) -n;
				_putchat('0' + (temp % 100));
				return (temp % 10);
				}
				else
				{

