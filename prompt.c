#include "shell.h"
/**
 * run_prompt - function that run the main prompt of our shell
 * Return: 0 if function succeed
 */

char *test = NULL;

int run_prompt(void)
{

	size_t bufsize = 1024;
	ssize_t bytes_read;
	signal(SIGINT, signal_callback_handler);

	while (1)
	{
		printf(":) ");
		bytes_read = getline(&test, &bufsize, stdin);

		if (bytes_read == -1)
		{
			free(test);
			exit(1);
		}
		if (test[bytes_read - 1] == '\n')
			test[bytes_read - 1] = '\0';

		if (bytes_read == EOF)
		{
			free(test);
			exit(0);
		}

		if (strcmp(test, "exit") == 0)
		{
			free(test);
			exit(0);
		}

		if (strcmp(test, "env") == 0)
		{

			_printev();
		}
		else
			read_line(test);

	}
	free(test);
	return (0);
}

void signal_callback_handler(int x)
{
	signal(x, SIG_IGN);
	free(test);
	exit(0);
}
