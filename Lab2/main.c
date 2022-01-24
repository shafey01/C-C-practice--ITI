#include <stdio.h>
#include <stdlib.h>
// #inculde "C:\Program Files\CodeBlocks\MinGW\include\MyLibrary.h"

int main()
{

    /*
    int x ;
    int sum = 0;

    while (sum <100)
    {
        scanf("%d", &x);
        sum +=x;
    }

*/


/*
    int x=0;
    printf("If you want color blue press 1, red press 2, black press 3 \n");
    scanf("%d", &x);

    switch(x)
    {
    case 1:   printf("Blue");
        break;
    case 2: printf("RED");
        break;
    case 3: printf("Black");
        break;
    }
*/


/*
    int size = 3;

    int col = 2;
    int row = 1;

*/


/*
    int count = 0;

    int max=0;
    int number;

    while(count <3)
    {
        printf("Enter number \n");
        scanf("%d", &number);
        if(number>max)
            max = number;

        count ++;

    }

    printf("The maximum is %d", max);
*/

/*
    int x = 3;

    for(int i = 1; i<=10; i++)
    {
        printf("%d * %d = %d  \n", i, x, i*x);
    }

*/



    char x ;

    printf("Enter character\n");
    scanf("%c", &x);
    if( (x >='a' &&  x <= 'z') || (x >='A' && x <= 'Z') )
        printf("This is Alpha ");
    else
        printf("This is not Alpha ");





    return 0;
}
