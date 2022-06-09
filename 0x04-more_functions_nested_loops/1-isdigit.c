/**
 * _isdigit - checks for digit
 * @c: first and only parameter
 * Return: Always integer value
 */

int _isdigit(int c)
{
	int c;

	if (isdigit(c))
		return (1);
	else
		return (0);
}
