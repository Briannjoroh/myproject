//headers which contain the header files all the library functions
#include <stdio.h>
#include <stdlib.h>
//these is the constant.
#define PI 3.14159
/*These is a macro*/
#define AREA(r) (PI*r*r)

//The main function
int main()
{
    //data type and valuable name
   int radius = 7;
   float area = AREA(radius);
   printf("These is the Area: %f", area);
    return 0;
}
