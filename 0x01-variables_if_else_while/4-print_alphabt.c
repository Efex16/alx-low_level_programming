#include <stdio.h>

/**
 * main - program execution start
 *
 * Return: 0 (successful)
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if ((letter == 'e') || (letter == 'q'))
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');

	return (0);
}
