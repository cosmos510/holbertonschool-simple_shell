#include "shell.h"

/**
* read_line - Function to tokenize
* the input command line
* @command: argument from run_prompt function
* Return: Always 0
*/
int read_line(char *command)
{
	char *token = strtok(command, " \n\t");
	char *args_command[256];
	int i = 0;

	while (token != NULL)
	{
		args_command[i++] = token;
		token = strtok(NULL, " \n\t");
	}
	args_command[i] = NULL;

	tokenize_path(args_command);

	return (0);
}

/**
 * _getline - function to count numbers
 * of bytes passed to the command line
 * Return: numbers of bytes counted
 */
ssize_t _getline(void)
{
	size_t bufsize = 1024;
	ssize_t bytes_read;

	bytes_read = getline(&test, &bufsize, stdin);

	if (bytes_read == -1)
	{
		free(test);
		exit(1);
	}

	if (bytes_read == EOF)
	{
		free(test);
		exit(0);
	}

	return (bytes_read);
}
