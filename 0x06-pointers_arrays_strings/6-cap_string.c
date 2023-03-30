#include "main.h"
/**
 * cap_string - capitalizes all the words in a string
 * @s: pointer to the string
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ((s[i - 1] == ',' || s[i - 1] == ' ') &&
				(s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		else if ((s[i - 1] == ';' || s[i - 1] == '\t') &&
				(s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		else if ((s[i - 1] == '\n' || s[i - 1] == '.') &&
				(s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		else if ((s[i - 1] == '!' || s[i - 1] == '?') &&
				(s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		else if ((s[i - 1] == '"' || s[i - 1] == '(') &&
				(s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		else if ((s[i - 1] == ')' || s[i - 1] == '{') &&
				(s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		else if ((s[i - 1] == '}' || i == 0) &&
				(s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		else
			s[i] = s[i];
	}
	return (s);
}
