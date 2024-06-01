#include<stdio.h>

int main()

{
    int no =10;

    printf("Value of No, %d\n", no);
    
    printf("Address of No, %d\n", &no);

    printf("Size of No, %d\n", sizeof(no));

    no++;

    printf("Value of No, %d\n", no);

    no--;

    printf("Value of No, %d\n", no);

    return 0;
}