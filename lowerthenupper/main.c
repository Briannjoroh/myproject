#include <stdio.h>
#include <stdlib.h>

int main()
{
   char i = 'a';
   char j = 'A';ASS
    while(i <= 'z' && j >= 'Z'){
        printf("%c\n", i);
        printf("%c\n", j);

        i++;
        j++;
    }

    return 0;
}
