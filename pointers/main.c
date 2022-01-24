#include <stdio.h>
#include <stdlib.h>


#define CVV 156
void e(int a)
{
    if(a>0)
    {
        e(--a);
        printf("%d", a);
        e(--a);
    }
}

int* f1(void)
{
    int x = 10;
    return (&x);
}

int sum(int arr[], int size)
{
    int j, s = 0;
    for(j=0; j<size; j++)
    {
        s += arr[j];
    }

}
struct su
{
    int i;
    float j;
    char *c;
    char name[100];
};

int * rev(int *x)
{
    int* ptr;
    *ptr = -1**x;
    return ptr;
}
long pow(int x, int y)
{
    return x * pow(x, --y);
    if(y==1)
        return 1;
}
int main()
{
//    int i,j;
//    int** ptr = malloc(3*4);
//
//    for(i=0; i<3; i++)
//        ptr[i] = malloc(3*4);
//
//    for(i=0;i<3;i++)
//    for(j=0; j<3; j++)
//     ptr[i][j] = i;
//
//     for(i=0;i<3;i++)
//    for(j=0; j<3; j++)
//    printf("%d \n", ptr[i]  );
//

//   int a = 4;
//   e(a);

//    printf("%d", f1());

//    int num;
//    do{
//        scanf("%d", &num);
//    }while(num <1 || num>10);


// for(printf("Flower");printf("Yello"); printf("Fruits"))
// {
//
// }

//char str[20] = "Hello";
//char *p = str;
//*p = 'M';
//printf("%s \n", str);
//
//
//    int a= 10;
//    a = a*CVV;
//    printf("CVV=%d", a);
//
//


//    int a[5] = {5,1,15,20,25};
//
//    int i,j,m;
//
//    i = ++a[1];
//    j = a[1]++;
//    m = a[i++];
//
//    printf("%d %d %d", i,j,m);


//    int* p;
//    printf("B");
//    p = (int*)malloc(256*256);
//    printf("A");
//    if(p == NULL)
//        printf("FAILD");

//int i = 10%2==0;


//float a = 10.0;
//
//a = (int) a%3;
//
//printf("%f", a);
//
//int a = 14%5;
//
//printf("%d", a);



//int x[2] = {1,2,3,4};
//
//int* ptr;
//ptr = x;
//ptr +=2;
//int total = sum(x,9);
//printf("%d", total);


//
//int x = 3, y, *z;
//
//z = &x;
//y = *z++;
//
//printf("%d %d %d", x, y,z);


//struct s *p;
//
//p = (struct s*) malloc(sizeof(struct s));
//p->c = (char*)malloc(23);
//
//strcpy(p->c, "ACS");
//printf("%s", p->c);

//int a = 8;
//
//a = *rev(&a);
//
//printf("%d", a);

//    char ch;
//
//    if(!getch())
//    {
//        if(getch())
//            printf("TRUE");
//    }
//    else
//        printf("FALE");


//long out = pow(3,4);
//printf("%d", out);

//    struct su *p;

//    p = malloc(sizeof(struct su) * 5*2);

//   p[10]->name = "ABV";

//strcpy(*(p[10]->name), "ABV");
//    printf("%s",p->name);
//int b =2;
//float a = 1.99;
//int x =10;
//
//switch((int)a)
//{
//case 0:
//    x+=b;
//case 1:
//    x+=b;
//case 2:
//    x+=3;
//}
//
//printf("%d", x);


//char *ch;
//*ch = 'c';
//
//printf("%c", *ch);
//

//int *p = malloc(sizeof(char[20]));


    int count = 0;

    do
    {
        printf("%d", count++);
    }
    while(10>=count++);

    return 0;
}
