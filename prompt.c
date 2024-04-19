#include "shell.h"
/**
 * run_prompt - function that run the main prompt of our shell
 * Return: 0 if function succeed
 */

char *command = NULL;

int run_prompt(void)
{

	size_t bufsize = 1024;
	ssize_t bytes_read;
	signal(SIGINT, signal_callback_handler);

	while (1)
	{
		printf(":) ");
		bytes_read = getline(&command, &bufsize, stdin);

		if (bytes_read == -1)
		{
			free(command);
			exit(1);
		}
		if (command[bytes_read - 1] == '\n')
			command[bytes_read - 1] = '\0';

		if (bytes_read == EOF)
		{
			free(command);
			exit(0);
		}

		if (strcmp(command, "exit") == 0)
		{
			free(command);
			exit(0);
		}

		if (strcmp(command, "env") == 0)
		{

			_printev();
		}
		else
			read_line(command);

	}
	free(command);
	return (0);
}

void signal_callback_handler(__attribute_maybe_unused__ int x)
{
	signal(x, SIG_IGN);
	free(command);
	exit(0);
}
