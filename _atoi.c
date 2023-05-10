#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <shell.h>

/**
 * is_interactive_mode - returns true if shell is interactive mode
 *
 * Return: 1 if interactive mode, 0 otherwise
 */

int is_interactive_mode(void)
{
	return (isatty(STDIN_FILENO) && fileno(stdin) <= 2);
}

/**
 * is_delimiter - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */

int is_delimiter(char c, const char *delim)
{
	while (*delim)
	{
		if (c == *delim++)
		{
			return (1);
		}
	}
	return (0);
}

/**
 *is_alpha - checks for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int is_alpha(char c)
{
	return (isalpha(c) != 0);
}

/**
 *atoi - converts a string to an integer
 * @str: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

int atoi(const char *str)
{
	int sign = 1, result = 0, flag = 0;

	while (*str != '\0' && flag != 2)
	{
		if (*str == '-')
		{
			sign = -1;
		}
		else if (isdigit(*str))
		{
			flag = 1;
			result *= 10;
			result += (*str - '0');
		}
		else if (flag == 1)
		{
			flag = 2;
		}
		str++;
	}

	return (sign * result);
}
