#include "main.h"

int main()
{
	char *arr;

	arr = creat_Array(5, 'B');

	for(int i = 0; i < 5; i++)
	{
		printf("%c\n", arr[i]);
	}

	return 0;

}	
		
