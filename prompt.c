#include "shell.h"
char *test;
/**
 * run_prompt - function that run the main prompt of our shell
 * @bytes_read: value of bytes numbers
 * Return: 0 if function succeed
 */

int run_prompt(ssize_t bytes_read)
{
	

	signal(SIGINT, signal_callback_handler);
	while (1)
	{
		printf(":) ");
		bytes_read = _getline();



		if (test[bytes_read - 1] == '\n')
			test[bytes_read - 1] = '\0';

		if (strcmp(test, "exit") == 0)
		{
			free(test);
			exit(0);
		}
		if (strcmp(test, "env") == 0)
			_printev(environ);
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
 * @status: The command string whose memory needs to be released
 */
void our_exit(int status)
{

	exit(status);
}
