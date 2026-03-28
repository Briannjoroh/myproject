#include<stdio.h>
#include<string.h>

int main(){

	int num [] = {-1, -5, -6, 9, 10, 0};

	int i;

	int length = sizeof(num)/sizeof(num[0]);

	for(i=0; i<length; i++){

		if(num[i] < 0){

			continue;
		}

		if(num[i] == 0){
			
			break;
		}

		printf("%d", num[i]);

		return 0;

	}

}		



