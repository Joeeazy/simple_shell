#include "shell.h"
/**
*custom_strtok - tokenizes the strings using various delimiters
*@str: The String being tokenized into different tokens
*@delim: pointer to the delimiter being used
*Return: the token after tokenization or NULL for dailure
*/

char *custom_strtok(char *str, const char *delim)
{
char *token;
static char *remainder;

if (str != NULL)
{
remainder = str;
}
if (remainder == NULL || *remainder == '\0')
{
return (NULL);
}
while (*remainder != '\0' && custom_strchr(delim, *remainder) != NULL)
{
remainder++;
}
if (*remainder == '\0')
{
return (NULL);
}
token == remainder;
while (*remainder != '\0' && strchr(delim, *remainder) == NULL)
{
remainder++;
}
if (*remainder != '\0')
{
*remainder = '\0';
remainder++;
}
return (token);
}
