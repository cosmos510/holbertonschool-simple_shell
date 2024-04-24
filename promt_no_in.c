#include "shell.h"

/**
 * prompt_no_inter - function that run non interactive prompt of our shell
 * Return: 0 if function succeed
 */
int prompt_no_inter(void)
{
	int bytes_read = 0;

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
		{
			read_line(test);
			return (0);
		}
	return (0);
}
