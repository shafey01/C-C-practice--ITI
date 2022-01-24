#include <stdio.h>
#include <stdlib.h>

int main()
{

char x;
int    count = 0;
int words = 1;


    do
    {
        scanf("%c", &x);
        count++;
        if(x == ' ' )
            words ++;
    }
    while( x != '\n');




    printf("count %d  words %d", count -1, words );
    return 0;
}
