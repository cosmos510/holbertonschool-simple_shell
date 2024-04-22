#include "shell.h"

/**
 * new_env - function to create a new child process and execute a program
 * with specified arguments
 * @executable_path: path to the executable program
 * @args: Array of arguments to be passed to the program
 * Return: void
 */
void new_env(char *executable_path, char *args[])
{
	pid_t child = fork();
	int status;


	if (child == -1)
	{
		perror("Error");
		free(args);
		exit(2);
	}
	else if (child == 0)
	{
		execve(executable_path, args, environ);
		free(args);
	}
	else
	{
		wait(&status);
	}
}
