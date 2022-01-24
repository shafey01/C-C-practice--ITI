#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    do{


     ch = getche();
     if(ch == -32){
    ch = getch();
     printf(" %d \n", ch, ch);

     }
     else
       printf(" %d \n", ch, ch);
    }
    while(ch != 13);
    return 0;
}
