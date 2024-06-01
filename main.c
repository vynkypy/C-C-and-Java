#include<stdio.h>


int x = 21;

extern int no;
extern void vynky();


int main()
{   
    printf("Value of X is %d\n", x);
    printf("Value of No is %d\n", no);

    vynky();    

    return 0;
}