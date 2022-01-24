#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {3,5,8,3,7};
    int max = arr[1];
    int min = arr[1];

    for(int i=0; i<5; i++)
        {if(arr[i] > max)
            max = arr[i];}



     for(int i=0; i<5; i++)
        {if(arr[i] < min)
            min = arr[i];}





        printf("The max = %d \n", max);
        printf("The min = %d \n", min);




    return 0;
}
