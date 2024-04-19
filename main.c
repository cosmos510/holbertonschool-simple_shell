#include "shell.h"
/**
 * main - main funcion that allow the programm to run
 * @ac: number of arguments passed to the command line
 * @av: list of arguments
 * Return: 0 if program run with success
 */
int main(int ac, __attribute__((unused)) char **av)
{
	ssize_t bytes_read;
	size_t bufsize = 1024;
	if (ac == 1)
	{
		if (isatty(STDIN_FILENO))
		{
			run_prompt();
		}
		else
		{
			bytes_read = getline(&test, &bufsize, stdin);
			if (bytes_read == -1)
			{
				free(test);
				exit(1);
			}
			if (test[bytes_read - 1] == '\n')
				test[bytes_read - 1] = '\0';

			read_line(test);
		}

	}
	else
	{
		perror("hsh:");
	}
	return (0);
}
