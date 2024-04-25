#include "shell.h"
char *usercmd;
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

		if (usercmd[bytes_read - 1] == '\n')
			usercmd[bytes_read - 1] = '\0';

		if (strcmp(usercmd, "exit") == 0)
		{
			free(usercmd);
			exit(0);
		}
		else if (strcmp(usercmd, "env") == 0)
			_printev(environ);
		else
		{
			cut_line(usercmd);
		}
	}
	free(usercmd);
	return (0);
}

