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
