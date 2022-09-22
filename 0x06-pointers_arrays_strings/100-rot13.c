#include "main.h"
#include <stdio.h>
 
 /**
  * rot 13 - ...
  * @s: ...
  *
  * Return: ....
  */
char *rot13(char *s)
{
	int a = 0;

	while (s[a])
	{
		while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'z'))
		{
			if ((s[a] >= 'm' && s[a] <= 'z') || (s[a] >= 'M' && s[a] <= 'z'))
			{
				s[a] -= 13;
				break;
			}

			s[a] += 13;
			break;
		}

		a++;
	}

	return (s);
}


