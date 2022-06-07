/**
 * print_alphabet_x10 - Return type void
 * args*: No arguments (void)
 *
 * Description: prints lowercase alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int putchar(int c);

	int firstletter, i, n;

	n = 0;

	while (n != 10)
	{
		for (firstletter = 97, i = 1; i < 27; firstletter++, i++)
			putchar(firstletter);
		putchar(10);
		n++;
	}
}
