#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char ch[100], c[100];


    gets(ch);


    for( i=0; ch[i] != '\0'; i++)
    {
        c[i] = ch[i];
    }

    c[i] = '\0';


    printf("%s", c);
    return 0;
}
