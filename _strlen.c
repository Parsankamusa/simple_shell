#include "holberton.h"
/**
 * _strlen - returns lenght of a string
 * @s: character(s)
 * Return: integer.
 */

int _strlen(const char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}
