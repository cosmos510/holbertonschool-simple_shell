#include "shell.h"
/**
 * _printev - prints all the environment variables.
 *
 * This function prints all the environment variables currently available.
 * It iterates through the environment variables array and prints each variable
 * followed by a newline character using printf.
 */

void _printev(void)
{
	int i = 0;

	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);
}
