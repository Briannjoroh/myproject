#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int s1_leng = strlen(s1); // used to get the string length of s1
				  
	int s2_leng = strlen(s2);  // used to get the string length os s2

	int size = s1_leng + s2_leng + 1; // these is the size you need to store the new sting and olso the null turminater;

	char *string = calloc(size, sizeof(char)); // memory allocated for the string in memory

	for(int i = 0; i < s1_leng; i++)
	{
		string[i] = s1[i]; // the means copy all the values in indexses of s1 to string indexes
	}

	for(int i =0; i < s2_leng; i++)
	{
		string[s1_leng + i] = s2[i]; // still copyng the s2 indexs to string but we shift.. which meanc continue from where s1 stoped
	}

	return string;

}	



