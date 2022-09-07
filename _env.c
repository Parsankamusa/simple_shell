#include "holberton.h"

/**
* _env - prints the current environment
* Returns: nothing
*/

void _env(void)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]) + 1);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

