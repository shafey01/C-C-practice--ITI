#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch[100], c;
   int count = 0;


    printf("Enter word\n");
    gets(ch);
    printf("Enter character\n");
    scanf("%c",&c);


    for(int i=0; ch[i] != '\0'; i++)
    {
        if(c==ch[i])
            count++;
    }


    printf("%d", count);

    return 0;
}
