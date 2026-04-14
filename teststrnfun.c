#include"main.h"

int _strlen(char* s)
{
	int s_length = strlen(s);

	int size = s_length + 1;

	int i;

	int length;


	char *string = malloc(sizeof(char) * s_length);

        if(string == NULL)
	{ 
		return 0;
	}

	for(i = 0; i < s_length; i++)
	{
		length = string[i] - 1;
	}

	return length;

}	








