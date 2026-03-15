#include <stdio.h>
#include <stdlib.h>

int main()
{
   char num = 'a';

   do{
        printf("%c\n", num);
          num++;
   }
   while(num <= 'z');
    return 0;
}
