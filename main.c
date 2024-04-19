<<<<<<< HEAD
#include "s_shell.h"

/**
 *
 *
 *
 *
=======
#include "shell.h"
/**
 * main - main funcion that allow the programm to run
 * @ac: number of arguments passed to the command line
 * @av: list of arguments
 * Return: 0 if program run with success
>>>>>>> main
 */
int main(int ac, __attribute__((unused)) char **av)
{
	if (ac == 1)
	{
<<<<<<< HEAD
		if (isatty(0))
		{
			run_prompt();
		}
		else
			printf("the standard output is to a terminal\n");
=======
		if (isatty(STDIN_FILENO))
		{
			run_prompt();
		}
>>>>>>> main
	}
	else
	{
		perror("hsh:");
	}
	return (0);
}
