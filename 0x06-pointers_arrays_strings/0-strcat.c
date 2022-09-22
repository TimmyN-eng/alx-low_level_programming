#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
