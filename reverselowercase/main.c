#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i = 'z';

    while(i >= 'a'){
        printf("%c\n", i);

        i--;
    }

    return 0;
}
