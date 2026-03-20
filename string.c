#include<stdio.h>
#include<string.h>

int main(){
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("%zu\n", strlen(alph)); // using the strlen function, neglets the \0 character
	printf("%zu\n", sizeof(alph)); // using the sizeof function , includes the \0 character

	return 0;

}	

