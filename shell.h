#ifndef S_SIMPLE_H
#define S_SIMPLE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <signal.h>


extern char **environ;
extern char *test;

int run_prompt(ssize_t bytes_read);
int read_line(char *command);
void new_env(char *executable_path, char *args[]);
void _printev(char **environ);
int *tokenize_path(char **args_command);
char *_getenv(const char *var);
void execute_command(char **args, char **args_command);
void signal_callback_handler(int x);
void our_exit(int status);
ssize_t _getline(void);

#endif
