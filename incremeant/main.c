#include <stdio.h>
#include <stdlib.h>



int* increment(int * array,int size)
{
    int i=0;

     for(i=0; i<size; i++)
    {
        array[i] +=2;
    }


    return array;

}

int main()
{
    int i;

    int array[] = {1,2,3};

    int* result = increment(array,3);

     for(i=0; i<3; i++)
    {
        printf("%d \n",result[i]);
    }





    return 0;
}
