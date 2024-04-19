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
 * new_env - function to create a new child process and execute a program
 * with specified arguments
 * @executable_path: path to the executable program
 * @args: Array of arguments to be passed to the program
 * Return: void
>>>>>>> main
 */
void new_env(char *executable_path, char *args[])
{
	pid_t child = fork();

	if (child == -1)
	{
		perror("Error");
<<<<<<< HEAD
=======
		free(args);
>>>>>>> main
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
<<<<<<< HEAD
		if (execve(executable_path, args, NULL) == -1)
		{
		perror("Error");
		exit(EXIT_FAILURE);
		}
=======
		execve(executable_path, args, environ);
		free(args);
		perror("Error");
>>>>>>> main
	}
	else
	{
		int status;
<<<<<<< HEAD
		wait(&status);
	}
	printf("\n");
=======

		wait(&status);
	}
>>>>>>> main
}
