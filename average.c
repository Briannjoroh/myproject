#include<stdio.h>
#include<string.h>

int main(){

	int ages[] = {21, 25, 40, 18, 36, 50, 29, 42};

	float avg, sum = 0;

	int i;

	int length = sizeof(ages)/sizeof(ages[0]);

	for(i=0; i<length; i++){
		sum +=ages[i];
	}

	avg = sum / length;

	printf("The average age is: %.2f", avg);

	return 0;

}	
