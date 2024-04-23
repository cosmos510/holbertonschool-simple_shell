
#include "shell.h"


int prompt_no_inter()
{
	int bytes_read =0;

	while(1)
	{
		bytes_read = _getline();
		if (bytes_read > 0)
		{
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

			}
		}

	}



	return (0);
}
