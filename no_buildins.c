#include "shell.h"

/**
 * search_cmd - execute a command from the given arguments.
 * @dir: an array of directories in the path
 * @input_cmd: an array of strings representing the command
 * and its arguments.
 */

void search_cmd(char **dir, char **input_cmd)
{
	int j = 0, i = 0;
	char executable_path[256];
	int found = 0;

	while (dir[i] != NULL)
	{
		for (j = 0; dir[j] != NULL; j++)
		{
			sprintf(executable_path, "%s/%s", dir[j], input_cmd[0]);

			if (!found && access(executable_path, X_OK) == 0)
			{
				execute_cmd(executable_path, input_cmd);
				found = 1;
			}
		}
		i++;
	}
	i = 0;
	while (input_cmd[i] != NULL)
	{
		if (!found && access(input_cmd[i], X_OK) == 0)
		{
			execute_cmd(input_cmd[i], input_cmd);
			found = 1;
		}
		i++;
	}
	if (!found && access(input_cmd[0], X_OK) != 0)
		perror("hsh");
}
