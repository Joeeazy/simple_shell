#include "shell.h"
#include <unistd.h>
#include <stdlib.h>

/**
* main - Executes a basic Unix command-line interpreter.
* @arg_count: The count of command-line arguments.
* @arg_values: An array of command-line argument strings.
* Return: The exit status of the last executed command.
*/
int main(int arg_count __attribute__((unused)),
char **arg_values __attribute__((unused)))
{
exit_status = 0;
run_shell_loop(arg_count, arg_values);
return (exit_status);
}

/**
* free_tokens - Deallocates memory used for storing tokens.
* @token_array: A double pointer to an array of tokens.
*/
void free_tokens(char **token_array)
{
int token_index;

if (token_array == NULL)
{
return;
}

for (token_index = 0; token_array[token_index] != NULL; token_index++)
{
free(token_array[token_index]);
}
free(token_array);
}
