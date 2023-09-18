#include "shell.h"
#include <stddef.h>
#include <unistd.h>

/**
* custom_strcmp - Compare two strings
* @str1: First string
* @str2: Second string
*
* Return: 0 if strings are equal,
* positive if str1 > str2,
* negative if str1 < str2.
*/
int custom_strcmp(const char *str1, const char *str2)
{
int len;

for (len = 0; str1[len] == str2[len] && str1[len]; len++)
;

if (str1[len] > str2[len])
return (1);
if (str1[len] < str2[len])
return (-1);
return (0);
}

/**
* custom_strcpy - Copy a string from source to destination.
* @destination_pointer: Destination string.
* @source_pointer: Source string.
*
* Return: Pointer to the destination string.
*/
char *custom_strcpy(char *destination_pointer, const char *source_pointer)
{
int i = 0;

while (source_pointer[i] != '\0')
{
destination_pointer[i] = source_pointer[i];
i++;
}
destination_pointer[i] = '\0';
return (destination_pointer);
}
