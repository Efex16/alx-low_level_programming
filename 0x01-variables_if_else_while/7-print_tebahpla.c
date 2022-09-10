#include <stdio.h>

/**
 * main - program execution starts
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char letter;

	letter = 'z';

	while (letter <= 'a')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
