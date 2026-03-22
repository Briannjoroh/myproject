#include<stdio.h>
#include<string.h>

int main(){
	
	int arr[] = {10, 20, 30, 40, 50};
	//arr[0] = 12;

	//printf("%d\n", arr[0]);


	int leng = sizeof(arr)/ sizeof(arr[0]);

	int i;

	for(i = 0; i < 5; i++){
	        printf("%d\n", arr[i]);
		
	}
	return 0;
}	


