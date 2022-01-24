#include <stdio.h>
#include <stdlib.h>
#include "MyLibrary.h"
#define highlight 0x70
#define normal 0x07
#define up 72
#define down 80
#define escape 27
#define pageup 73
#define pagedown 81
#define home 71
#define enter 13

struct emp {
        int id;
        char name[20];
        float salary, bouns;
        float dedcution;
    };


int i,j;
int count1 = 0;
int count2 = 0;
struct emp array[5];
void emp()
{


   // for(i=0; i<count1; i++)



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

void displayemp()
{
    for(j=0; j<i; j++)
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

    int cur = 0;
    char menu[3][100] = {"ADD", "Display","exit"};



    char ch;
    int exitflag = 0;
    int flag = 0;

    do{

    textattr(normal);
    clrscr();

     if(flag ==1){


        clrscr();

        _cprintf("Hiiiiiiiii \n");
        printf("To Return Press r  : ");
        char re = scanf("%c",&re);
        clrscr();

    }

    for(int i=0; i<3; i++){

    if(i == cur)
        textattr(highlight);
    else
        textattr(normal);

           gotoxy(10,5+2*i);
    _cprintf(menu[i]);

    }

        char ch = getch();
        if(ch == -32)
        {
            ch = getch();
            switch(ch)
            {
            case up:
                cur --;
                if(cur < 0)
                        cur = 2;
                    break;
            case down:
                cur ++;
                      if(cur > 2)
                        cur = 0;
                    break;
            case pageup:
                cur--;
                if(cur<0)
                    cur = 2;
                break;
            case pagedown:
                cur ++;
                if(cur>2)
                    cur = 0;
            case home:
                   cur = 0;
                break;

            }
        }
        else if (ch == 27)
        {
            exitflag = 1;

        }
        else if(ch == 13)
        {
            if(cur == 1){

                clrscr();
                displayemp();

               getch();

            }
            else if(cur ==0)
            {
                clrscr();
                printf("ADD name: \n");
                emp();
                 i++;
                //getch();

            }
            else if(cur ==2)
            {
                exitflag = 1;
            }
         }



    }




    while(exitflag == 0);









    return 0;
}
