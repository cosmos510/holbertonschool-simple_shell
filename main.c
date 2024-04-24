#include "shell.h"

/**
 * main - main funcion that allow the programm to run
 * @ac: number of arguments passed to the command line
 * @av: list of arguments
 * Return: 0 if program run with success
 */
int main(__attribute__((unused))int ac, __attribute__((unused)) char **av)
{
	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			run_prompt(0);
		}
		else
		{
			prompt_no_inter();
		}
	}
	free(test);
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
