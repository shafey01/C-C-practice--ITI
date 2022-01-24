#include <stdio.h>
#include <stdlib.h>
#include "MyLibrary.h"

int main()
{

    int col;
    int row;
    int size;
    printf("Enter size \n");
    scanf("%d", &size);

    //gotoxy(col + 8, row + 8);
    //printf("1");



    for(int i=1; i<= size * size; i++)
    {

        if(i==1)
        {
            row = 1;
            col = (size+1)/2;

        }
        else if((i-1) % size == 0)
            {row ++;

            }
        else
            {

            row --;
            col --;
            if(row == 0)
            row = size;
            if(col == 0)
            col = size ;


            }


            gotoxy(col *3, row *2);
            printf("%d",i);



    }





    return 0;
}
