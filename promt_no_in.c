
#include "shell.h"


int prompt_no_inter()
{
	int bytes_read =0;
	char *cmd = NULL;

	while(1)
	{
		bytes_read = _getline();
		if (bytes_read > 0)
		{
			if (test[bytes_read - 1] == '\n')
			test[bytes_read - 1] = '\0';

			cmd = strtok(test," \t\n");

			while (cmd != NULL)
			{
				read_line(cmd);
				cmd =strtok(NULL, " \t\n");
			}
		}
	}
	return (0);
}
