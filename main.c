#include "s_shell.h"
/**
 *
 *
 *
 *
 */
int main()
{
    if (isatty(STDIN_FILENO))
	{
        char *command = NULL;
        size_t bufsize = 1024;
        ssize_t bytes_read;

        while (1)
		{
            printf("$ ");
            bytes_read = getline(&command, &bufsize, stdin);

            if (bytes_read == -1) {
                break;
            }

        if (command[bytes_read - 1] == '\n')
			{
                command[bytes_read - 1] = '\0';
            }

            char *token = strtok(command, " ");
            char *args[32];
            int i = 0;

            while (token != NULL)
			{
                args[i++] = token;
                token = strtok(NULL, " ");
            }
            args[i] = NULL;

            char executable_path[256];
            sprintf(executable_path, "/usr/bin/%s", args[0]);

			pid_t child = fork();

			if (child == -1)
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
			else if (child == 0)
			{
				if (execve(executable_path, args, NULL) == -1)
				{
					perror("Error");
					exit(EXIT_FAILURE);
				}

			} else
			{
				int status;
				wait(&status);
			}
        }
		free(command);

		printf("\n");
    } else {
        /* Mode non interactif */
    }

    return 0;
}
