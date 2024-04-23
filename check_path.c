#include "shell.h"

/**
 * execute_command - execute a command from the given arguments.
 * @args: an array of strings representing possible paths.
 * @args_command: an array of strings representing the command
 * and its arguments.
 */

void execute_command(char **args, char **args_command)
{
	int i = 0;
	char executable_path[256];
	int found = 0;

	while(args[i] != NULL)
	{

		sprintf(executable_path, "%s/%s", args[i], args_command[0]);
		if (access(executable_path, F_OK) == 0)
		{
			new_env(executable_path, args_command);
			found = 1;
			return;
		}

		if (!found && access(args_command[0], F_OK) == 0)
		{
			new_env(args_command[0], args_command);
			found =1;
		}
		i++;
	}

}
