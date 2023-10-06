#include "main.h"

/**
* 
* 
* 
* 
*/

//Returns the number of bytes in the initial segment of s which consist only of bytes from accept

//Number of bites in intial segment of S 
//only of bytes from accept





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
