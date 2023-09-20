#include "shell.h"
#include <unistd.h>
#include <stdlib.h>

/**
* run_shell_loop - continously runs the shell untill CTRL +D or Exit.
* @arg_count: The number of command line arguments.
* @arg_value: An array of command-line arguments strings.
* Return: void
*/
void run_shell_loop(int arg_count, char **arg_value)
{
int shell_condition = 1;
char *input_line = NULL;
char **tokenized_input;

/*const char *shell_prompt = "$ ";*/

do {

/*write(STDOUT_FILENO, shell_prompt, 2);*/

input_line = custom_read_command(arg_count, arg_value);
if (input_line == NULL)
{
free(input_line);
break;
}
tokenized_input = parse_input(input_line);
shell_condition = execute_arguments(tokenized_input);
free(input_line);
free_tokens(tokenized_input);
} while (shell_condition);
}
