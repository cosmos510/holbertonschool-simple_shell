#include "shell.h"
/**
 * execute_cmd - function to create a new child process
 * and execute a program with specified arguments
 * @executable_path: path to the executable program
 * @args: Array of arguments to be passed to the program
 *
 */
void execute_cmd(char *executable_path, char *args[])
{
	pid_t child = fork();
	int status;

	if (child == -1)
	{
		perror("hsh");
		free(usercmd);
		exit(2);
	}
	else if (child == 0)
		execve(executable_path, args, environ);
	else
		wait(&status);
}
