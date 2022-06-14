#include <string.h>

/**
 * _strcpy - copy string into a string variable
 * @dest: string variable to be copied to
 * @src: string to be copy
 * Return: Always character
 */

char *_strcpy(char *dest, char *src)
{
	 char *ret = strcpy(dest, src);
	dest = ret;

	return (dest);
}
