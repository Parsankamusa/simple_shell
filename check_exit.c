#include "holberton.h"
/**
* check_exit - checks to see if the terminal input was "exit"
* and quits the shell if so
* @command: array of command and arguments to the command
* @buffer: allocated buffer that holds input
* @from_terminal: flag to indicate whether input was from terminal
*
* Return: nothing
*/

/* if function returns -1, it tells program to quit */
void check_exit(char *command[], char *buffer, int *from_terminal)
{
	int exitcode = 0;
	(void)buffer;
	(void)from_terminal;
	if (_strcmp(command[0], "exit") == 0)
	{
		if (command[1])
			exitcode = _atoi(command[1]);
		exit(exitcode);
	}
}
