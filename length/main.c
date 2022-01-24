#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch[100];
int    count = 0;


    gets(ch);


    for(int i=0; ch[i] != '\0'; i++)
    {
        count ++;
    }

    printf("%d", count);

    return 0;
}
