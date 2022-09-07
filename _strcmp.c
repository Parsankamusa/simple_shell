#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first string to be compared with
 * @s2: second string to be compared with
 * Return: Always 0.
 */
int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	for (; s1[i] && s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
		return (0);
		}
	}
	return (s1[i] - s2[i]);
}
