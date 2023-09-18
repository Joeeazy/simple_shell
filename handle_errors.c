#include "shell.h"

/**
*print_custom_error - prints an error msg to standard error
*@program_name: our shell's programs name
*@command_count: command count for identity
*@command: the specific command that causes an error
*@error_description: prints the error msg innit
*/

void print_custom_error(const char *program_name, int command_count, const char
*command, const char *error_description)
{
char cmd_count_str[20];
char new_line = '\n';

/* prints shell name and a separator */
write_string(STDERR_FILENO, program_name);
write_string(STDERR_FILENO, ": ");

/* Transforms and prints the command count */
transform_string(command_count, cmd_count_str);

/* prints commands number and a separator*/
write_string(STDERR_FILENO, cmd_count_str);
write_string(STDERR_FILENO, ": ");

/*prints the specific command  causing an error */
write_string(STDERR_FILENO, command);
write_string(STDERR_FILENO, ": ");

/* prints the custom error message */
write_string(STDERR_FILENO, error_description);

/* prints a new line to standard error */
write(STDERR_FILENO, &new_line, 1);
}

/**
*write_string - writes a string toa specified file descriptor
*@descriptor: the exact file descriptor to be writen into
*@result_string: the result of the str to write(can be NULL)
*/
void write_string(int descriptor, const char *result_string)
{
write(descriptor, result_string, strlen(result_string));
}
