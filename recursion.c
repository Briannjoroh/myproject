#include<stdio.h>

// using recursion to add all numbers from 1 to 10;

int sum(int k);

int main(){

	int result = sum(10);

	printf("%d", result);

	return 0;

}

int sum(int k){

	if(k > 0) {

		return k + sum(k - 1);

	}else {

		return 0;
	}
}	
		


	
