#include<stdio.h>

int main()
{
    int arr[4][5];


    arr[1][2]= 11;
    arr[3][3] = 121;

    printf("%d\n", arr[1][2]);
    return 0;
}