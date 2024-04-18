#include "s_shell.h"

/**
 *
 *
 *
 *
 */
int read_line(char *command)
{
	char *token = strtok(command, " ");
	char *args[32];
	int i = 0;
	char executable_path[256];

	while (token != NULL)
	{
		args[i++] = token;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;

	sprintf(executable_path, "/usr/bin/%s", args[0]);
	new_env(executable_path, args);

	return (0);
}
