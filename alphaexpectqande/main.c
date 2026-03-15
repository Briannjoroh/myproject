#include <stdio.h>
#include <stdlib.h>

int main()
{
   char i;

   for(i = 'a'; i <= 'z'; i++){
    if(i == 'e'){
        continue;
    }
     if(i == 'q'){
        continue;
    }

    putchar(i);
    putchar(' ');

   }

    return 0;
}
