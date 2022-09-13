#include "main.h"

/**
 * main - program execution start
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z');
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
