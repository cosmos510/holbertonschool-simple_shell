#ifndef S_SIMPLE_H
#define S_SIMPLE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

int run_prompt(void);
int read_line(char *command);
void new_env(char *executable_path, char *args[]);
/*int *tokenize_path(char *path);*/
/*void no_build_in(char *path1, char* path2, char *path3);*/


#endif
