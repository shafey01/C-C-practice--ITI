#include <stdio.h>
#include <stdlib.h>
int largest(int x, int y, int z)
{
    int max = x;

    if(y>x)
    max = y;
    else if (z>x)
    max = z;

    return max;
}

int main()
{
 int c = largest(1,-9,0);
 printf("%d \n", c);
    return 0;
}
