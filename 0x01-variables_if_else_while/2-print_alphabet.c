#include <stdio.h>

/**
 * main - program execute begins
 *
 * Return: 0 (successful)
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
