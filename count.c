#include<stdio.h>

int countdown(int n);

int main(){

	int count =countdown(5);

	printf("%d", count);

	return 0;

}

int  countdown(int n){

	if(n > 0){

		return countdown(n - 1);

	}else {
		return 0;

	}

}	
