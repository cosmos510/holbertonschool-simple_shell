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
	char *path = strdup(_getenv("PATH"));

	if (!path || !(*path))
		return (NULL);
	if (args_command[0][0] == '/')
	{
		if (access(args_command[0], F_OK) == 0)
			new_env(args_command[0], args_command);
	}
	else
	{
			tokens = malloc(1024);
		if (tokens == NULL)
		{
			exit(0);
		}
		if (path)
		{
			tok = strtok(path, ":");

			while (tok != NULL)
			{
				tokens[i++] = tok;
				tok = strtok(NULL, ":");
			}
			tokens[i] = NULL;
		}


			execute_command(tokens, args_command);
	}

	free(tokens);
	free(path);

	return (0);
}
