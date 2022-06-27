#include <string.h>

/**
 * _strdup - returns a duplicate string of str
 * @str: string to be duplicated
 * Return: string of characters
 */

char *_strdup(char *str)
{
	char *str_dup;

	if (str == NULL)
		return (str);

	str_dup = strdup(str);

	if (str_dup == NULL)
		return (str_dup);

	return (str_dup);
}
