#include "holberton.h"

/**
* echo_check - checks to see if command is "echo"
* @command: array of commands
*
* Return: 0 or 1
*/

int echo_check(char *command[])
{
	int i;
	char *value;

	if (_strcmp(command[0], "echo") == 0)
	{
		/* if the second argument begins with $ - print a variable */
		if (command[1] && command[1][0] == '$')
		{
			for (i = 0; command[1][i]; i++)
				command[1][i] = command[1][i + 1];
			value = _getenv(command[1]);
			if (value)
				write(STDOUT_FILENO, value, _strlen(value) + 1);
			free(value);
		}
		write(STDOUT_FILENO, "\n", 1);
		return (0);
	}
	/* return 1 by default to keep execute_on ON */
	return (1);
}
