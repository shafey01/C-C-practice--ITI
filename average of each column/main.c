#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sum = 0;
    int avg ;
    int arr[2][3] = {{9,2,10},{1,2,6}};

     for(int i = 0; i<3; i++)
    {


    for(int j = 0; j<2; j++)
        {sum += arr[j][i];


        }

        avg = sum /2;
     printf("The average of coloumn %d = %d \n", i+1 ,avg);
     sum = 0;
    }

    return 0;
}
