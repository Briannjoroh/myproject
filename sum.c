#include<stdio.h>
#include<string.h>

int main(){

	int values[] = {40, 22, 10, 52, 70, 12, 33, 29, 90, 18};

	int total,sum = 0;

	float avg = 0;

	int i;

	int length = sizeof(values)/sizeof(values[i]);

	for(i=0; i<length; i++){
		
		sum+=values[i];


	}

	total = sum;

	avg = sum / length;


	printf("The tottal sum of the values is: %d\n", total);

	 printf("The average values is: %.2f", avg);

	return 0;

}	

