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

int run_prompt(int mode);
void signal_callback_handler(int x);

ssize_t _getline(void);
int read_line(char *command);

int *tokenize_path(char **args_command);
void execute_command(char **args, char **args_command);

char *_getenv(const char *var);
void new_env(char *executable_path, char *args[]);

void _printev(char **environ);
void our_exit(int status);

#endif
