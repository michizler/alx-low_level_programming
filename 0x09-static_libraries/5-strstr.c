#include <string.h>

/**
 * _strstr -  function finds the first occurrence of the substring 'needle' in
 * the string 'haystack'.
 * @haystack: string to be scanned
 * @needle: string containing the characters to match.
 *
 * Return: character pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);

	return (ret);

}
