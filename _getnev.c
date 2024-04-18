#include "shell.h"
/**
 * _getenv - retrieves the value of an environment variable.
 * @var: the name of the environment variable to retrieve.
 * Return: a pointer to the value of the environment variable,
 * or NULL if not found.
 */

char *_getenv(char *var)
{
	int i = 0;
	size_t var_len = strlen(var);
	char *value_start = NULL;

	for (i = 0; environ[i]; i++)
	{
		if (strncmp(environ[i], var, strlen(var)) == 0)
		{
			value_start = &environ[i][var_len + 1];
			return (value_start);
		}
	}
	return (NULL);
}
