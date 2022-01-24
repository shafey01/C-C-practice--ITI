#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[5] = {1,2,6,4,5};


    int* ptr = array;

    for(i=0; i<5; i++)
    {
        printf("%d \n", *(ptr+i));
    }


    return 0;
}
