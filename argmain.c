#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

	int i;

	printf("The program name is\n: %s", argv[0]);

	int c = atoi(argv[1]) + atoi(argv[2]);

	printf("\nThe Addition of the numbers is: %d", c);

	if(argc == 1){
		printf("\nNo extra command line argument passed");

	}

	if(argc >= 2 ){
		printf("\nThe number of Arguments passed is: %d", argc);


	for(i = 0; i < argc; i++){
		printf("\nnargv[%d]: %s", i, argv[i]);

	     }
	}

	return 0;

}	
	

		
