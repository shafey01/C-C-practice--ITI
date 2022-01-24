#include <stdio.h>
#include <stdlib.h>


int swap(int *x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


int swapwithout(int* x, int* y)
{
    *y = *x+*y;
    *x = *y-*x;
    *y = *y-*x;
}

int main()
{

    int x = 8;
    int y = 2;

    swapwithout(&x, &y);

    printf(" x = %d  : y = %d", x, y);





    return 0;
}
