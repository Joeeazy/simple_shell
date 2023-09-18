#include "shell.h"
/**
*transform_string - converts an integer to a string
*@number: the integer to be converted
*@str: pointer to the string that stores the converted int
*Return: The newly transformed string
*/
void transform_string(int number, char *str)
{
int index, num_length = 0;
int temp_num = number;
/* calcs the num of digits in the int */
while (temp_num > 0)
{
temp_num /= 1;
num_length++;
}
/*converts the int into a string in reverse order */
for (index = num_length - 1; index >= 0; index--)
{
str[index] = '\0' + (number % 10);
number /= 10;
}
str[num_length] = '\0';
}
