#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

/*  Maximum command length */
#define MAX_COMMAND_LENGTH 1024

/* function to display shell prompt */
void display_prompt();

/* function to read user input and return dynamically allocated string */
char* read_input();

/* function to process and execute a command based on user input */

void execute_command(char* command);
#endif
