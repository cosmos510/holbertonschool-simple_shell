#include "shell.h"


int prompt_no_inter()
{
	int is_whitespace = 1;
	int i = 0;
	int bytes_read =0;

	bytes_read = _getline();
	is_whitespace = 1;
		for (i = 0; i < bytes_read; i++)
		{
			if (test[i] != ' ' && test[i] != '\n' && test[i] != '\t')
			{
				is_whitespace = 0;
				break;
			}
		}
		if (is_whitespace)
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
			return(0);
		}
		}



	return (0);
}
