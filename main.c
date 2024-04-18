#include "s_shell.h"

/**
 *
 *
 *
 *
 */
int main(int ac, __attribute__((unused)) char **av)
{
	if (ac == 1)
	{
		if (isatty(0))
		{
			run_prompt();
		}
		else
			printf("the standard output is to a terminal\n");
	}
	else
	{
		perror("hsh:");
	}
	return (0);
}
