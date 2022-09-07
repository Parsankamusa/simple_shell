#include "holberton.h"

/**
* _setenv - sets an environment variable
* @name: variable name
* @value: variable value
* @overwrite: flag to overwrite if variable exists
*
* Return: 0
*/

int _setenv(const char *name, const char *value, int overwrite)
{
	char *getvalue = NULL;
	int i;

	getvalue = _getenv(name);
	if (getvalue && overwrite == 0)
	{
		free(getvalue);
		return (0);
	}

	if (getvalue && overwrite != 0)
	{
		for (i = 0; environ[i]; i++)
		{
			if (strncmp(name, environ[i], _strlen(name)) == 0)
			{
				free(getvalue);
				environ[i][0] = '\0';
				strcat(environ[i], name);
				strcat(environ[i], "=");
				strcat(environ[i], value);
				break;
			}
		}
		return (0);
	}

	if (!getvalue)
		new_env(name, value);
	return (0);
}
