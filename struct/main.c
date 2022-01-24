#include <stdio.h>
#include <stdlib.h>


struct employee{

    int id;
    char name[20];

};

struct dept
{
    int id;
    char name[20];

    struct employee emp;
};




int main()
{
    struct dept x = {15, "IoT", "20", "Manger mina"};


    printf("%s", x.emp.name);
    return 0;
}
