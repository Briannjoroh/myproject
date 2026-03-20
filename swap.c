#include<stdio.h>

// swap using call by address

void swap(int *a, int *b);

void main(){
	int e,f;

	printf("enter values for a and b: ");
	scanf("%d%d", &e, &f);

	printf("values before swaping are c=%d d=%d\n", e,f);

	swap(&e,&f);

	printf("values after swaping are c=%d d=%d\n", e,f);

}

void swap(int*a, int*b){
	int temp;

	temp = *a;
	*a = *b;
        *b = temp;

}	


