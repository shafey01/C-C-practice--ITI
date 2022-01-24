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
#define size 1000
#define left 75
#define right 77
#define backspace 8
#define column 10
#define row 10

int main()
{
    char word[size] = {'\0'};
    char index = 0;
    char flag = 0;
    char letter;
    int* first = word;
    int* last = word ;
    int* cur = word;
    int i=0;


    textattr(highlight);
    gotoxy(10,10);
    printf("                        ");

    do{


            letter = getch();
            switch(letter)
            {
                case -32:
                     letter = getch();
                      switch(letter)
                         {

                         case pageup:
                            gotoxy(column,row);
                            break;
                         case left:
                                if(cur >= first)
                                  {
                                       cur--;
                                gotoxy(column + (i--), row);
                                  }
                                  break;
                         case right:
                            if(cur <= last)
                                  {
                                       cur++;
                                gotoxy(column + (i++), row);
                                  }
                                break;




                         }

                    break;
                case 27: flag = 1; break;
                case backspace:

                    if(cur >= first)
                                  { gotoxy(column + (i--), row);
                                      printf(" ");

                                       cur--;
                                       last--;


                                  }
                    break;
                case 13:
                    textattr(normal);
                    clrscr();
                    textattr(normal);
                    gotoxy(20,5);

                    for(int j=0; j<=i; j++)
                    printf("%c", word[j]);

                    flag =1;
                    break;

                default:
                            if(i<size)
                            {
                                gotoxy(i+column, row);
                                *cur = letter;
                                word[i] = *cur;
                                cur++;
                                last++;
                                i++;

                                printf("%c", letter);

                            }









            }

    }
    while(flag == 0);










    return 0;
}
