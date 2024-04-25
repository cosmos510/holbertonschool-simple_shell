#include "shell.h"

/**
* tokenize_path - Function to tokenize
* the PATH environment value.
* @args_command: argument from read_line
* function
* Return: Always 0
*/
int *tokenize_path(char **args_command)
{
	char **tokens = 0;
	char *tok = 0;
	int i = 0;
	char *path = NULL;

	if (_getenv("PATH") == NULL)
	{
		execute_cmd(args_command[0], args_command);
		return (0);

	}
	else
		path = strdup(_getenv("PATH"));

	tokens = malloc(1024);

	if (tokens == NULL)
	{
		exit(0);
	}

	tok = strtok(path, ":");

	while (tok != NULL)
	{
		tokens[i++] = tok;
		tok = strtok(NULL, ":");
	}
	tokens[i] = NULL;


	search_cmd(tokens, args_command);

	free(tokens);
	free(path);

	return (0);
}

/**
 * _getenv - retrieves the value of an environment variable.
 * @var: the name of the environment variable to retrieve.
 * Return: a pointer to the value of the environment variable,
 * or NULL if not found.
 */

char *_getenv(const char *var)
{
	int i = 0;
	int var_len = strlen(var);
	char *value_start = NULL;

	for (i = 0; environ[i]; i++)
	{
		if (strncmp(environ[i], var, var_len) == 0)
		{
			value_start = &environ[i][var_len + 1];
			return (value_start);
		}
	}
	return (NULL);
}
