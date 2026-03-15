#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;

    for(i = 'a'; i <= 'f'; i++){
            if(i == 'd'){
                continue;
            }
        putchar(i);
        putchar('\n ');

    }

    return 0;
}
