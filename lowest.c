#include<stdio.h>
#include<string.h>

int main(){

	int grades[] = {40, 15, 80, 45, 55, 90, 74, 36, 69};

	int i;

	float avg, sum = 0;

	int length = sizeof(grades)/sizeof(grades[0]);

	int lowestGrade = grades[1];

	int highestGrade = grades[0];

	for(i=0; i< length; i++){
	       if(lowestGrade > grades[i]){

			lowestGrade = grades[i];

		  }

		if(highestGrade < grades[i]){

			highestGrade = grades[i];
	     }

		sum+=grades[i];

	}

	avg = sum / length;
	
	printf("The lowest grade in the class is: %d\n", lowestGrade);

        printf("The highest grade in the class is: %d\n", highestGrade);

        printf("The average grade in the class is: %.2f\n", avg);



	return 0; 

}	
