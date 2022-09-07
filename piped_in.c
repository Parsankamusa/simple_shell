#include "holberton.h"
/**
* piped_in - reads input to buffer if it is piped in from stdin
* @lines: array of strings
* @buffer: string to store input
*
* Return: flag
*/
int piped_in(char *lines[], char *buffer)
{
	int flag, j, read_bytes = 0;
	size_t size = 1024;

	read_bytes = read(STDIN_FILENO, buffer, size);
	if (read_bytes == -1)
		exit(EXIT_FAILURE);
	if (read_bytes == 0)
		exit(EXIT_SUCCESS);
	buffer[read_bytes] = '\0';
	j = 0;
	flag = 0;
	lines[j] = strtok(buffer, "\n");
	/*delimiter by line */
	while (lines[j])
	{
		j++;
		lines[j] = strtok(NULL, "\n");
	}
	return (flag);
}
