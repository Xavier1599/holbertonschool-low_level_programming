#include "main.h"

/**
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int idx;

	if (needle == 0)
		return (haystack);

	while (needle)
	{
		idx = 0;

		if (haystack[idx] == needle[idx])
		{
			do{
				if (needle[idx + 1] == '\0')
					return (haystack);
				idx++;
			}while (haystack[idx] == needle[idx]);
		}
		haystack++;
	}
	return (NULL);
}
