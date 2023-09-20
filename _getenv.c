#include "shell.h"
#include <stddef.h>
#include <unistd.h>

size_t _strlen(const char *strng);

/**
* custom_getenv - Retroieve thre valueof the environment variable.
* @var_name: The name of the environment variable, or NULL if not found.
*
* Return: The value of environment variable or NULL if not found.
*/
char *custom_getenv(const char *var_name)
{
int var_name_len = _strlen(var_name);
char **env;

for (env = environ; *env; ++env)
{
if (custom_strncmp(var_name, *env, var_name_len) == 0 &&
(*env)[var_name_len] == '=')
{
return (&((*env)[var_name_len + 1]));
}
}
}
