#include "main.h"
/**
 * string_toupper - converts lowercase to upper case
 * @stg: the string that is converted
 * Return: stg
 */

char *string_toupper(char *stg)
{
	int i;

	for (i = 0 ; stg[i] != '\0' ; i++)
	{
		if (stg[i] >= 97 && stg[i] <= 122)
			stg[i] = stg[i] - 32;
	}
	return (stg);
}
