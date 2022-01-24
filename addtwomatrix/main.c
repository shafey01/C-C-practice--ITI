#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[2][2] = {{1,2},{3,2}};
    int arr2[2][2] = {{3,6},{5,4}};
    int arr3[2][2];

    int add = 0;

    for(int i = 0; i<2; i++)
    for(int j = 0; j<2; j++)
    {
        add = arr1[i][j] + arr2[i][j];
        arr3[i][j] = add;

        add = 0;

    }


    for(int i = 0; i<2; i++)
    {


    for(int j = 0; j<2; j++)
    {
        printf("%d ", arr3[i][j]);
    }
    printf("\n");
    }
    return 0;
}
