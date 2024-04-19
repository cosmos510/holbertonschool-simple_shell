#include "shell.h"
/**
 * main - main funcion that allow the programm to run
 * @ac: number of arguments passed to the command line
 * @av: list of arguments
 * Return: 0 if program run with success
 */

int main(int ac, char **av)
{
    if (ac == 1 && strcmp(av[0], "./hsh") == 0)
    {
        run_prompt();
    }
    else if (ac > 1)
    {
        perror("hsh ");
    }
    return (0);
}
