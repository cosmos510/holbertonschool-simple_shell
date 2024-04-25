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
extern char *usercmd;

int run_prompt(int mode);
void signal_callback_handler(int x);

ssize_t _getline(void);
int cut_line(char *command);

int *tokenize_path(char **args_command);
void search_cmd(char **input_cmd, char **input_args);

char *_getenv(const char *var);
void execute_cmd(char *executable_path, char *args[]);

void _printev(char **environ);
void our_exit(int status);

#endif
