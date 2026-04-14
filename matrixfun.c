#include "main.h"

int **alloc_grid(int width, int height)
{
	int **ptr;

	int i,j;

	if(width <= 0 || height <= 0)// checks that all the elemenst are no 0 or any number below it. 
	{
		return NULL;
	}

	ptr = malloc(width * sizeof(int*));//memory allocated for rows

	if(ptr = NULL)
	{
		return NULL;
	}

	for(i = 0; i < width; i++)// these loop alocates memory for each row
	{
		ptr[i] = malloc(height * sizeof(int));//memory for columns

		if(ptr[i] = NULL)
		{
			return NULL;
		}

	}

	for(i = 0; i < width; i++) // inisialization of all elementsa to 0
	{	
	        for(j = 0; j < height; j++)
         	{ 
		       ptr[i][j] = 0;
	        }

	}

	return ptr;

}	
				
