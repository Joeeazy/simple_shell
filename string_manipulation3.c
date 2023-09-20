#include "shell.h"
/**
*custom_atoi - converts the string into an integer
*@s: pointer to the string being converted
*Return: The converted int value
*/
int custom_atoi(char *s)
{
int res_value = 0;
int sn = 1;
int h = 0;

while (s[h] == ' ' || s[h] == '\t' || s[h] == '\n')
{
h++;
}

if (s[h] == '+' || s[h] == '-')
{
sn = (s[h++] == '-') ? -1 : 1;
}

while (s[h] >= '0' && s[h] <= '9')
{
res_value = res_value * 10 + (s[h] - '0');
h++;
}

return (res_value *sn);
}

/**
*custom_strncmp - compares two strings according to number of bytes
*@str1: pointer to the 1st string
*@str2: pointer to the second string
*@n: max number of number of bytes used for comapring
*Return: 0 0r 1
*/
int custom_strncmp(const char *str1, const char *str2, int n)
{
int w = 0;

while (str1[w] && str2[w] && w < n)
{
if (str1[w] != str2[w])
{
return (str1[w] - str2[w]);
}
w++;
}
if (w == n)
{
return (0);
}
if (str1[w] && !str2[w])
{
return (1);
}
else if (!str1[w] && str2[w])
{
return (-1);
}
return (0);
}
/**
*custom_strncpy - copies a string
*@destination_pointer: dest of char string type
*@source_pointer: pointer to the src char string type
*@string_length: the maimum length of bytes being used innit
*Return: pointer to the dest of the string
*/
char *custom_strncpy(
	char *destination_pointer,
	char *source_pointer,
	int string_length)
{
int copy_index;

for (copy_index = 0; copy_index < string_length &&
		source_pointer[copy_index] != '\0'; copy_index++)
{
destination_pointer[copy_index] = source_pointer[copy_index];
}
for (; copy_index < string_length; copy_index++)
{
destination_pointer[copy_index] = '\0';
}
return (destination_pointer);
}

/**
* atoi_alt - Entry point
* Description - 'A function that converts a character string to an integer.'
* @strng: the string to be converted
* Return: Converted integer value
*/
int atoi_alt(char *strng)
{
int result_value = 0;
int sn = 1;
int character_index = 0;

while (strng[character_index] == ' ' ||
	strng[character_index] == '\t' ||
	strng[character_index] == '\n')
{
character_index++;
}

if (strng[character_index] == '+' || strng[character_index] == '-')
{
sn = (strng[character_index++] == '-') ? -1 : 1;
}

while (strng[character_index] >= '0' && strng[character_index] <= '9')
{
result_value = result_value * 10 + (strng[character_index] - '0');
character_index++;
}

return (result_value *sn);
}
