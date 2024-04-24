#include "shell.h"

/**
 * main - main funcion that allow the programm to run
 * @ac: number of arguments passed to the command line
 * @av: list of arguments
 * Return: 0 if program run with success
 */
int main(int ac, char **av)
{
	signal(SIGINT, signal_callback_handler);

	if (ac == 1 && strcmp(av[0], "./hsh") == 0)
	{
		if (isatty(STDIN_FILENO))
		{
			run_prompt(0);
		}
		else
		{
			run_prompt(1);
		}
	}
	else
		printf("error\n");

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
