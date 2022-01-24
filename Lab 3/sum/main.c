#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int arr[3][4] = {{1,2,9,7},
                    {1,2,9,6},
                    {1,3,4,5}};


    for(int i = 0; i<3; i++)
    {


    for(int j = 0; j<4; j++)
        {sum += arr[i][j];


        }
     printf("The grade of student %d = %d \n", i+1 ,sum);
     sum = 0;
    }




    return 0;
}
