#include "shell.h"

/**
 * main - main funcion that allow the programm to run
 * @ac: number of arguments passed to the command line
 * @av: list of arguments
 * Return: 0 if program run with success
 */
int main(int ac, char **av)
{
	if (ac == 1 && strcmp(av[0], "./hsh") == 0)
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
	else
	{
		printf("hsh: 1: %s: not found\n", av[1]);
		exit (0);
	}
	free(test);
	return (0);
}


/**
 * _getline - function to count numbers
 * of bytes passed to the command line
 * Return: numbers of bytes counted
 */
ssize_t _getline(int flag)
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

	if (flag == 1)
	{
		read_line(test);
	}

	return (bytes_read);
}
