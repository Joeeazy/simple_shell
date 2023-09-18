#include "shell.h"
#include <stddef.h>
#include <unistd.h>

/**
* custom_strlen - Calculate the length of a string.
* @strng: The string to measure.
*
* Return: The length of the string.
*/
size_t custom_strlen(const char *strng)
{
size_t len = 0;

while (strng[len] != '\0')
{
len++;
}
return (len);
}

/**
* custom_strcat - Concatenate two strings.
* @target: Destination string.
* @append: Source string.
*
* Return: Pointer to the concatenated string.
*/
char *custom_strcat(char *target, const char *append)
{
int target_len = 0;
int h;

/* Find the length of the target string */
while (target[target_len] != '\0')
{
target_len++;
}

/* Append the source string to the target string */
for (h = 0; append[h] != '\0'; h++)
{
target[target_len + h] = append[h];
}

/* Add a null-terminating character to the concatenated string */
target[target_len + h] = '\0';

return (target);
}

/**
* _strlen - Calculate the length of a string.
* @strng: The string to be measured.
*
* Return: The length of the string.
*/
size_t _strlen(const char *strng)
{
size_t len = 0;

while (strng[len] != '\0')
{
len++;
}
return (len);
}

/**
* custom_strchr - Search for the first occurrence of a character in a string.
* @strng: A pointer to the string to be searched.
* @charsearched: The character to be looked up.
*
* Return: A pointer to the first occurrence of the character c in strng,
* or NULL if char c is not found in strng.
*/
char *custom_strchr(const char *strng, char charsearched)
{
while (*strng != '\0')
{
if (*strng == charsearched)
return ((char *)strng);
strng++;
}
return (NULL);
}

/**
* _memcpy - Copy memory area.
* @destination_pointer: Destination buffer.
* @source_pointer: Source buffer.
* @n: Number of bytes to copy.
*
* Return: A pointer to the destination buffer.
*/
char *_memcpy(char *destination_pointer, const char *source_pointer, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
destination_pointer[i] = source_pointer[i];
}
return (destination_pointer);
}
