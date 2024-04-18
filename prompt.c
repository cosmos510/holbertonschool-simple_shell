#include "s_shell.h"

/**
 *
 *
 *
 *
 */
int run_prompt(void)
{
	char *command = NULL;
	size_t bufsize = 1024;
	ssize_t bytes_read;

	while (1)
	{
		printf(":) ");
		bytes_read = getline(&command, &bufsize, stdin);

		if (bytes_read == -1)
			break;

		if (command[bytes_read - 1] == '\n')
			command[bytes_read - 1] = '\0';

		if (strcmp(command, "exit") == 0)
			exit(0);

		read_line(command);
	}
	free(command);
	return (0);
}
