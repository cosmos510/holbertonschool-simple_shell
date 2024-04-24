#include "shell.h"
/**
 * _printev - prints all the environment variables.
 * @environ: environ to be pass
 * This function prints all the environment variables currently available.
 * It iterates through the environment variables array and prints each variable
 * followed by a newline character using printf.
 */

void _printev(char **environ)
{
	int i = 0;

	if (!environ)
		exit(-1);

	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);
}

/**
 * our_exit - Function to release memory allocated for a command string and
 * then exit the program.
 * @status: The command string whose memory needs to be released
 */
void our_exit(int status)
{

	exit(status);
}
