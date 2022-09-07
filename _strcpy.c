#include "holberton.h"
/**
* _strcpy - copies a string
* @src: string to be copied
* @dest: string to copied to
* Return: dest
*/
char *_strcpy(char *dest, const char *src)
{
	int length;

	for (length = 0; src[length] != '\0'; length++)
		dest[length] = src[length];
	dest[length] = '\0';

	return (dest);
}
