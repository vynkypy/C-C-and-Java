#include<stdio.h>

int main()
{
    int no = 11;
    int *ptr = &no;
    printf("Size of pointer is %d\n", sizeof(ptr));

    return 0;
}