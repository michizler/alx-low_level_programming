#include <string.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is
 * not found.
 * @s: first argument (string to be searched)
 * @c: character searched for.
 *
 * Return: always character value.
 */

char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);

	return (ret);
}
