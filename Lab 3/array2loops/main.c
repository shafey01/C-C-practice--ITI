#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{

    int arr[size] = {0};

    printf("Enter 5 Elements \n");

    for(int i = 0; i<size; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);






    return 0;
}
