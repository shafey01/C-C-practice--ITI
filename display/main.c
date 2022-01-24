#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char fname[10], lname[10], fullname[20];
    printf("Enter Your First name\n");
    gets(fname);
    printf("Enter Your last name\n");
    gets(lname);

    strcpy(fullname, fname);
    strcat(fullname, " ");
   strcat(fullname, lname);


    printf("%s",fullname);

    return 0;
}
