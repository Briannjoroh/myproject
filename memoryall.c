#include<stdio.h>
#include<stdlib.h>

int main(){

	int *ptr = (int *)malloc(sizeof (int) * 5);

	if(ptr == NULL){ 

		printf("Allocation faild !");

		exit(0);

	}

	ptr = (int *)realloc(ptr, 10 * sizeof(int));

	if(ptr == NULL){

		printf("Allocation faild !");

		exit(0);

	}

	for(int i = 0; i < 10; i ++){
		 
		ptr[i] = i + 1;

	}

	for(int i = 0; i < 10; i++){

		printf("%d\n", ptr[i]);

	}

	free(ptr);

	return 0;

}	





