#include "s_shell.h"

/**
 *
 *
 *
 *
 */
void new_env(char *executable_path, char *args[])
{
	pid_t child = fork();

	if (child == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		if (execve(executable_path, args, NULL) == -1)
		{
		perror("Error");
		exit(EXIT_FAILURE);
		}
	}
	else
	{
		int status;
		wait(&status);
	}
	printf("\n");
}
