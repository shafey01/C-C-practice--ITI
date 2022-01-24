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

int main()
{

    int cur = 0;
    char menu[3][10] = {"New","Save", "Exit"};
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
            if(cur == 0){
                clrscr();
                printf("New  menu");
                getch();

            }
            else if(cur ==1)
            {
                clrscr();
                printf("save  menu");
                getch();
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
