#include "holberton.h"
/**
* cd_check - checks to see if command is "cd"
* @command: array of commands
*
* Return: 0 or 1
*/
int cd_check(char *command[])
{
	int check;
	char *directory = NULL, cwd[512];

	if (_strcmp(command[0], "cd") == 0)
	{
		if (!command[1])
		{
			directory = _getenv("HOME");
			check = chdir(directory);
			free(directory);
			if (check == -1)
				exit(0);
			else
				_setenv("PWD", directory, 1);
		}
		if (command[1])
		{
			if (_strcmp(command[1], "-") == 0)
			{
				check = chdir("..");
				if (check == -1)
					exit(0);
				if (check == 0)
				{
					getcwd(cwd, sizeof(cwd));
					_setenv("PWD", cwd, 1);
				}
			}
			else
				check = chdir(command[1]);
				if (check == -1)
					exit(0);
				getcwd(cwd, sizeof(cwd));
				_setenv("PWD", cwd, 1);
		}
		return (0);
	}
	return (1);
}
