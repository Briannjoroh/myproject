#include <stdio.h>
#include "library.h"

int main(){
	printf("%d + %d = %d\n", 6, 5, add(6,5));

	printf("%d - %d = %d\n", 10, 3, sub(10,3));
	
	return 0;

}
