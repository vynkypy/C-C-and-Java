#include<stdio.h>

int main()

{
    int arr[] = {11,21,51,101,111,121};

    int *p = NULL;
    int *q = NULL;

    p = &(arr[0]);
    q = &(arr[4]);

    printf("difference between two pointers: %d\n", q-p);
    printf("%d\n",*p);       //11
    printf("%d\n",*q);       //111

    p=p+2;
    printf("%d\n",*p);       //51

    q=q-2;
    printf("%d\n",*q);       //51
    
    return 0;
}