/**
 * void print_alphabet(void) - Return type void
 * args: Has no args (void)
 * Description: Prints lowercase alphabets
 */

void print_alphabet(void)
{
	int putchar(int c);

	int firstletter, i;

	for (firstletter = 97, i = 1; i < 27; i++, firstletter++)
		putchar(firstletter);
	putchar(10);

}

