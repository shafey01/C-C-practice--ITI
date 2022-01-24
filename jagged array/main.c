#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int sizeofstd;
    int sizeofsub;

    int x;
    int y;


    printf("Enter the numbers of student \n");
    scanf("%d", &sizeofstd);

    int coloumn[sizeofstd];

    int** array = malloc(sizeofstd*4);


    for(int i=0; i<sizeofstd; i++)
    {
        printf("Enter the number of subjects of students %d \n", i+1);
        scanf("%d", &coloumn[i]);

        array[i] = malloc(coloumn[i]*4);
    }


    for(int i =0; i<sizeofstd; i++)
    for(int j=0; j<coloumn[i]; j++)
    {
        printf("Enter the degree of student %d of subject %d \n",i+1, j+1 );
        scanf("%d", &array[i][j]);
    }

     for(int i = 0; i<sizeofstd; i++)
    {
    for(int j =0; j<coloumn[i]; j++)
    {
         sum += array[i][j];

    }
       printf("The sum of student %d = %d \n", i+1, sum );
       sum = 0;
    }







    return 0;
}
