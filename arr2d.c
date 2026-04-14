#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

	/*int arry[3][3] ={
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};*/

	int **arry = malloc(sizeof(int *) * 3);  // arry of pointere to int that are returnd by malloc
		
	for(int i = 0; i < 3; i++){

		arry[i] = malloc(sizeof(int) * 3);

	}	


	/*int *arry0 = malloc(sizeof(int) * 3);   //memory allocated to the first int of theser block of memorry

	int *arry1 = malloc(sizeof(int) * 3);    //memory allocated to the first int of theser block of memorry

	int *arry2 = malloc(sizeof(int) * 3);    //memory allocated to the first int of theser block of memorry


	arry[0] = arry0;  //array at index 0 is storing the memory addres of arry0 is storing

	arry[1] = arry1;  //array at index 1 is storing the memory addres of arry1 is storing
			   
	arry[2] = arry2;  //array at index 0 is storing the memory addres of arry2 is storing*/

        arry[1][2] = 0;

	printf("%d\n", arry[1][2]);


	return 0;

}	
        

