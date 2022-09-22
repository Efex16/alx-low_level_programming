#incude "main.h" 

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned integer num;

/* check if the number is negative */

	num = n;	

	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	
/* print number by recursion*/
	if (num / 10)
		{
			print_number(num / 10);
		}
	_putchar((num % 10) + '\0');
}
