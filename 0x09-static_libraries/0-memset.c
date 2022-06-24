#include <string.h>

/**
 * _memset - returns the character 'b' for a
 * number or 'n' character bytes in a string
 * 's'
 * @s: string to be replaced
 * @b: character argument string is to be replaced with
 * @n: number of bytes to be replaced in a string
 * Return: Character value.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
