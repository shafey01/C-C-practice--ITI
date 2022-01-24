#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum = 0;
    float avg = 0;



    int sizeofstd;
    int sizeofsub;


    printf("Enter the numbers of student \n");
    scanf("%d", &sizeofstd);
    printf("Enter the numbers of subjects \n");
    scanf("%d", &sizeofsub);

    int** array = malloc(sizeofstd*4);
    for(i=0; i<sizeofstd; i++)
        array[i] = malloc(sizeofsub*4);


    for(int i =0; i<sizeofstd; i++)
    for(int j=0; j<sizeofsub; j++)
    {
        printf("Enter the degree of student %d of subject %d \n",i+1, j+1 );
        scanf("%d", &array[i][j]);
    }




    for(int i = 0; i<sizeofstd; i++)
    {
    for(int j =0; j<sizeofsub; j++)
    {
         sum += array[i][j];

    }
       printf("The sum of student %d = %d \n", i+1, sum );
       sum = 0;
    }


    for(int i = 0; i<sizeofstd; i++)
    {
    for(int j =0; j<sizeofsub; j++)
    {
         avg += array[j][i];

    }
        printf("The avg of subjects %d = %f \n", i+1, avg/sizeofsub );
        avg = 0;


    }
















    return 0;
}
