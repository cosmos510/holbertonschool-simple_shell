#include "shell.h"
char *test;
/**
 * run_prompt - function that run the main prompt of our shell
 * Return: 0 if function succeed
 */



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
			our_exit(0);

		if (strcmp(test, "env") == 0)
			_printev();
		else
			read_line(test);
	}
	free(test);
	return (0);
}

/**
 * signal_callback_handler - Function to handle a signal by ignoring it and
 * then calling our_exit with a specified parameter.
 * @x: The signal number to be handled
 */

void signal_callback_handler(int x)
{

	signal(x, SIG_IGN);
	free(test);
	our_exit(0);
}

/**
 * our_exit - Function to release memory allocated for a command string and
 * then exit the program.
 * @command: The command string whose memory needs to be released
 */
void our_exit(int status)
{

	exit(status);
}
