#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

int index_no = 0, dest_len = 0;

while (dest[index_no++])
dest_len++;

for (index_no = 0; src[index_no]; index_no++)
dest[dest_len++] = src[index_no];

return (dest);
}
