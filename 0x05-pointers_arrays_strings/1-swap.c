/**
 * swap_int - switches values of first input with second inpit
 * @a: first value input
 * @b: second input value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = *a;
}
