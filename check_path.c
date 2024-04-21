#include "shell.h"
/**
 * execute_command - execute a command from the given arguments.
 * @args: an array of strings representing possible paths.
 * @args_command: an array of strings representing the command
 * and its arguments.
 */

void execute_command(char **args, char **args_command)
{
	char executable_path[256];
	int found = 0, j = 0;

	if (args_command[0][0] == '/')
	{
		if (access(args_command[0], F_OK) == 0)
		{
			found = 1;
			new_env(args_command[0], args_command);
		}
	}
	if (!found)
	{
		for (j = 0; args[j] != NULL; j++)
		{
			sprintf(executable_path, "%s/%s", args[j], args_command[0]);
			if (access(executable_path, F_OK) == 0)
			{
				found = 1;
				new_env(executable_path, args_command);
				break;
			}
		}
	}
	if (!found)
		fprintf(stderr, "%s: Command not found\n", args_command[0]);
}
