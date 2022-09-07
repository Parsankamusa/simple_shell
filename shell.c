#include "holberton.h"
/**
* main - act as interpreter & shell clone
* @argc: argument count
* @argv: argument vector
*
* Return: 0
*/

int main(int argc, char **argv)
{
	char piped_buffer[1024], term_buffer[1024];
	char *lines[15], *command[15];
	int terminal = 1, j = 0, i = 0, execute_on = 1, on = 1, s_p = 0, ln = 0;
	(void)argc;

	signal(SIGINT, SIG_IGN);
	if (!(isatty(STDIN_FILENO)))
		terminal = piped_in(lines, piped_buffer);
	else
		write(STDOUT_FILENO, "$ ", 2);
	while (on)
	{
		if (terminal)
			line_token(lines, term_buffer);
		for (j = 0; lines[j]; j++)
		{
			ln++;
			word_token(command, lines[j]);
			if (terminal)
				execute_on = checks(command, &s_p, term_buffer, &terminal, &ln, argv);
			else
				execute_on = checks(command, &s_p, piped_buffer, &terminal, &ln, argv);
			if (execute_on)
				execute(command, argv);
			else
				execute_on = 1;
			if (s_p == 1)
				free(command[0]);
			s_p = 0;
		}
		for (j = 0; j <= 1024; j++)
			term_buffer[j] = 0;
		if (terminal)
			write(STDOUT_FILENO, "$ ", 2);
		reset(&i, &j, &execute_on);
		if (!terminal)
			on = 0;
	}
	return (0);
}
