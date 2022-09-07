#include "holberton.h"
/**
* env_check - checks to see if the user is calling the env command
* @command: array of commands
*
* Return: 1
*/

int env_check(char *command[])
{
	if (_strcmp(command[0], "env") == 0)
	{
		_env();
		return (0);
	}
	return (1);
}
