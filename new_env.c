#include "holberton.h"

/**
* new_env - creates a new environment variable
* @name: variable name
* @value: value of name
*
* Return: 0
*/

int new_env(const char *name, const char *value)
{
	int i, j, k;
	char equal = '=';
	char *src1, *src2;

	for (i = 0; environ[i]; i++)
		;
	j = _strlen(name);
	src1 = malloc(j + 2);
	if (!src1)
		exit(0);
	_strcpy(src1, name);
	src1[j] = equal;
	src1[j + 1] = '\0';
	k = _strlen(value);
	src2 = malloc(k + 1);
	if (!src2)
	{
		free(src1);
		exit(0);
	}
	_strcpy(src2, value);
	environ[i] = malloc(k + j + 2);
	if (!environ[i])
	{
		free(src1);
		free(src2);
		exit(0);
	}
	_strcpy(environ[i], src1);
	for (k = 0; src2[k]; k++)
		environ[i][j + k] = src2[k];
	environ[i][j + k] = '\0';
	return (0);
}
