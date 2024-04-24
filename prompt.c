#include "shell.h"
char *test;
/**
 * run_prompt - function that run the main prompt of our shell
 * @mode: flag for interactive or no interactive mode
 * Return: 0 if function succeed
 */

int run_prompt(int mode)
{
	ssize_t bytes_read = 0;

	while (1)
	{
		if (mode == 0)
			printf("dem:) ");

		bytes_read = _getline();

		if (test[bytes_read - 1] == '\n')
			test[bytes_read - 1] = '\0';

		if (strcmp(test, "exit") == 0)
		{
			free(test);
			exit(0);
		}
		else if (strcmp(test, "env") == 0)
			_printev(environ);
		else
		{
			read_line(test);
		}
	}
	free(test);
	return (0);
}

