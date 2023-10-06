#include "main.h"

/**
* 
* 
* 
* 
*/

unsigned int _strspn(char *s, char *accept)
{
	int countywounty = 0;
	
	for (; *s != '\0'; s++) 
	{
		char *tempcheck = accept;
		int found = 0;

		for (; *tempcheck != '\0'; tempcheck++)
		{
			if (*s == *tempcheck)
			{
				found = 1;
				break;
			}
		}
		if (found) {
			countywounty++;

		}
		else  {
			break;
		}
	}
return countywounty;

}
