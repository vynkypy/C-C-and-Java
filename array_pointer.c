#include<stdio.h>

int main()

{
    int arr[5] = {10,20,30,40,50};

    int *p = arr;

    int *q = &(arr[2]);

    int *r = &(arr[0]);

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);

    return 0;
}