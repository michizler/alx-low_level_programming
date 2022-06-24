#include <string.h>

/**
 * _memcpy - function copies n bytes from memory area
 * src to memory area dest
 * @dest: destination memory area for n bytes
 * @src: string where n bytes is copied from
 * @n: number of bytes to be copied
 *
 * Return: character pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
