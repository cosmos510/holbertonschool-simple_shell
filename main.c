#include "shell.h"
/**
 * main - main funcion that allow the programm to run
 * @ac: number of arguments passed to the command line
 * @av: list of arguments
 * Return: 0 if program run with success
 */
int main(int ac, __attribute__((unused)) char **av)
{
	if (ac == 1)
	{
		if (isatty(STDIN_FILENO))
		{
			run_prompt();
		}
	}
	else
	{
		perror("hsh:");
	}
	return (0);
}
