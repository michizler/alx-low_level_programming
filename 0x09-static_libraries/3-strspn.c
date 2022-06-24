#include <string.h>

/**
 * _strspn - Returns the number of bytes in the initial segment
 * of 's' which consist only of bytes from 'accept'.
 * @s: string to be scanned
 * @accept: string that contains length of characters to be
 * met.
 * Return: Always integer value.
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
