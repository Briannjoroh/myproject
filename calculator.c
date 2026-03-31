#include<stdio.h>

void add(int a, int b);

void subtract(int a, int b);

void multiply(int a, int b);

int main(){

	int choice, x = 10, y = 5;

	void (*operations[3])(int, int) = {add, subtract, multiply};

	printf("x = %d, y = %d\n\n", x, y);
	printf("choose an operation: \n");
	printf("0: add\n1: subract\n2: multiply\n");
	scanf("%d", choice);

	if(choice >= 0 && choice < 3){
		operations[choice](x, y);

	}else{
		printf("Invalidchoice!\n");
	}

	return 0;

}	

