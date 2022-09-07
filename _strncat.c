#include "holberton.h"
/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: string that will be appended to
 * @src: source string that doesn not need to be null terminated
 * @n: number of bytes that will be appended
 * Return: concatentated string
 */
char *_strncat(char *dest, const char *src, int n)
{
	int x;
	char *temp;

	temp = dest;
	while (*temp)
	{
		temp++;
	}
	for (x = 0; (x < n) && src[x]; x++)
	{
		*temp = src[x];
		temp++;
	}
	*temp = '\0';
	return (dest);
}
