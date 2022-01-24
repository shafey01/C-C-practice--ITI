#include <stdio.h>
#include <stdlib.h>


struct emp {
        int id;
        char name[20];
        float salary, bouns;
        float dedcution;
    };



struct emp addemp()
{
    struct emp e;

    printf("Enter id \n");
    scanf("%d", &e.id);


    printf("Enter name \n");
    scanf("%s", e.name);


    printf("Enter salary \n");
    scanf("%f", &e.salary);


    printf("Enter bouns \n");
    scanf("%f", &e.bouns);


    printf("Enter dedcution \n");
    scanf("%f", &e.dedcution);


    printf("Code: %d  net salary: %f\n", e.id, e.salary);



    return e;



}
int i,j;
void disemp()
{
    struct emp array[5];

    for(i=0; i<4; i++)
    {
    printf("Enter Information of employee %d \n", i+1);
    printf("Enter id \n");
    scanf("%d", &array[i].id);


    printf("Enter name \n");
    scanf("%s", array[i].name);


    printf("Enter salary \n");
    scanf("%f", &array[i].salary);


    printf("Enter bouns \n");
    scanf("%f", &array[i].bouns);


    printf("Enter dedcution \n");
    scanf("%f", &array[i].dedcution);
    }


    for(j=0; j<4; j++)
    {
        printf("The information of employee number %d \n", j+1);
        printf("ID: %d", array[j].id);
        printf("Name: %s", array[j].name);
        printf("Salary: %f \n", array[j].salary);
        printf("Bouns: %f \n", array[j].bouns);
        printf("Deduction: %f \n", array[j].dedcution);


    }

}

int main()
{
    struct emp e;

  e = addemp();

  disemp();



    return 0;
}
