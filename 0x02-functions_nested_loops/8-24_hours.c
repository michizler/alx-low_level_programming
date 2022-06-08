/**
 * jack_bauer - Prints every minute of the day
 * args*: void
 *
 * Description: Based on the 24hrs series.
 */

void jack_bauer(void)
{
	int _putchar(int c);

	int a;

	int b;
	
	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');
		}
	}
}
