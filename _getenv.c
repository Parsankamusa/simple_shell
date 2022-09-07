#include "holberton.h"
/**
* _getenv - looks for a particular variable in the current environment
* @name: variable to seek
*
* Return: pointer to the value at this variable in env
*/
char *_getenv(const char *name)
{
	char *tempo;
	char *tempo_start;
	char *token = NULL;
	char *match;
	int index = 0, k;

	for (; environ[index] != NULL; index++)
	{
		tempo = malloc(_strlen(environ[index]) + 1);
		if (tempo == NULL)
			exit(EXIT_FAILURE);
		for (k = 0; environ[index][k]; k++)
			tempo[k] = environ[index][k];
		tempo[k] = '\0';
		tempo_start = tempo;
		token = strtok(tempo, "=");

		if (_strcmp(token, name) == 0)
		{
			token = strtok(NULL, "\n");
			match = malloc(_strlen(token) + 1);
			if (match == NULL)
				exit(EXIT_FAILURE);
			for (k = 0; token[k]; k++)
				match[k] = token[k];
			match[k] = '\0';
			free(tempo_start);
			return (match);
		}
		free(tempo_start);
	}
	return (NULL);
}
