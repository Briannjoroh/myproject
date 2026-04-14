#include "main.h"

int main()
{
	int **my_array;

	int width = 4;
	int height = 4;

	int i,j;

	my_array = alloc_grid(width, height);

	for(i = 0; i < width; i++)
	{
		for(j = 0; j < height; j++)
		{
			printf("%d\n", my_array[i][j]);
		}
	
	}

	return 0;

}	

