#include "shell.h"

/**
* cut_line - Function to tokenize
* the input command line
* @command: argument from run_prompt function
* Return: Always 0
*/
int cut_line(char *command)
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
	ssize_t bytes_read = 0;

	bytes_read = getline(&usercmd, &bufsize, stdin);

	if (bytes_read == -1)
	{
		perror("hsh");
		free(usercmd);
		exit(0);
	}

	if (bytes_read == EOF)
	{
		perror("hsh");
		free(usercmd);
		exit(0);
	}
	return (bytes_read);
}
