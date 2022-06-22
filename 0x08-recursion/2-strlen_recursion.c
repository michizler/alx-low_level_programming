/**
 * _strlen_recursion - returns the length of a string
 * @s: string argument whose bytes is to be counted
 * Return: Always integer value
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
