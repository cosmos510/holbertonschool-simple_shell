#include "shell.h"


int prompt_no_inter()
{
	int bytes_read = 0;

	bytes_read = _getline();

	if (test[bytes_read - 1] == '\n')
		test[bytes_read - 1] = '\0';

	read_line(test);

	return (0);
}
