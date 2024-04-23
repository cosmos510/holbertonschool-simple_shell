#include "shell.h"

/**
 * main - main funcion that allow the programm to run
 * @ac: number of arguments passed to the command line
 * @av: list of arguments
 * Return: 0 if program run with success
 */
int main(int ac, __attribute__((unused)) char **av)
{
	int is_whitespace = 1, i =0;
	int bytes_read = 0;
	while(1)
	{
	if (ac == 1)
	{
		if (isatty(STDIN_FILENO))
		{
			run_prompt(0);
		}
		else
		{
			bytes_read = _getline();

		is_whitespace = 1;
		for (i = 0; i < bytes_read; i++)
		{
			if (test[i] != ' ' && test[i] != '\n' && test[i] != '\t')
			{
				is_whitespace = 0;
				break;
			}
		}
		if (is_whitespace)
			continue;

		if (test[bytes_read - 1] == '\n')
			test[bytes_read - 1] = '\0';

		if (strcmp(test, "exit") == 0)
		{
			free(test);
			exit(2);
		}
		if (strcmp(test, "env") == 0)
			_printev(environ);
		else
			read_line(test);
		}
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
