#include "shell.h"
/**
  *custom_strdup - duplicates and allocates memory to the string
  *@strng: the string being duplicated
  *Return: A pointer to the duplicated string
  */
char *custom_strdup(const char *strng)
{
	int accept_index, string_length = 0;
	char *duplicate_string;

	if (strng == NULL)
	{
		return (NULL);
	}
	while (strng[string_length] != '0')
	{
		string_length++;
	}
	duplicate_string = malloc((string_length + 1) * sizeof(char));
	if (duplicate_string == NULL)
	{
		/* if the memory fails */
		return (NULL);
	}
	for (accept_index = 0; accept_index < string_length; accept_index++)
	{
		duplicate_string[accept_index] = strng[accept_index];
	}
	duplicate_string[accept_index] = '\0';
	return (duplicate_string);
}
/**
  *custom_strncat - concatenates a string from the src to the dest
  *@append: pointer to the src of the string
  *@target: pointer to the dest of the string
  *@n: the max number of chars to be concatenated
  *Return: a pointer to the dest of the string
  */
char *custom_strncat(char *target, char *append, int n)
{
	int target_len = custom_strlen(target);
	int accept_index;

	for (accept_index = 0; accept_index < n && append[accept_index] != '\0'
			; accept_index++)
	{
		target[target_len + accept_index] = append[accept_index];
	}
	target[target_len + accept_index] = '\0';
	return (target);
}
/**
  *custom_strspn - gets the length of a prefixes substring
  *@strng: the string to be checked
  *@valid_characters: The substring being checked
  *Return: The num of bytes in a string that only belong to valid_characters
  */
size_t custom_strspn(char *strng, char *valid_characters)
{
	size_t n, accept_index;

	for (n = 0; strng[n] != '\0'; n++)
	{
		for (accept_index = 0; valid_characters[accept_index] != '\0'; a
				ccept_index++)
		{
			if (strng[n] == valid_characters[accept_index])
			{
				break;
			}
		}
		if (valid_characters[accept_index] == '\0')
		{
			break;
		}
	}
	return (n);
}
