#include<stdio.h>

int main(){

	int age;
	int limit = 100;

	for(age = 10; age <=limit; age++ ){
		printf("Enter youre age: ");
		scanf("%d", &age);

		printf("Your age is %d", age);


	}

	return 0;

}
