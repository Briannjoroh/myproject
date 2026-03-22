#include<stdio.h>
#include<string.h>

int main(){
	int data[2][4] = {{12, 14, 42, 11}, {20, 10, 30, 25}};

	int i, j;

	for(i = 0; i < 2; i++)
	{
	   for(j = 0; j < 4; j++){

		printf("%d\n", data[i][j]);
		
	   }
	}
	return 0;
}
