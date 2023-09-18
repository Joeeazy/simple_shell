#include "shell.h"

/**
* custom_strtok - Tokenozes a string using a specified delimiter
* @str: The input string to tokenize.
* @delim: The delimiter used to split the string.
*
* Return: A pointer to the next token in the input string,
* or NULL if no more tokens are found.
*/
char *custom_strtok(char *str, const char *delim)
{
char *token;
static char *overage;

if (str != NULL)
{
overage = str;
}

if (overage == NULL || *overage == '\0')
{
return (NULL);
}

while (*overage != '\0' && custom_strchr(delim, *overage) != NULL)
{
overage++;
}

if (*overage == '0')
{
return (NULL);
}

token = overage;
while (*overage != '\0' && strchr(delim, *overage) == NULL)
{
overage++;
}
if (*remainder != '\0';
{
*overage = '\0';
overage++;
}
return (token);
}
