/**
 * swap_int - swaps the integer values of two numbers
 * @a: first number
 * @b: second number
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
