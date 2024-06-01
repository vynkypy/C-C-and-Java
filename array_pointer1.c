#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};


    printf("Address of array is %d\n", arr);
    printf("Address of array is %d\n", &arr);
    printf("Address of array is %d\n", &(arr[0]));

    printf("Address of first element array is %d\n", &(arr[0]));
    printf("Address of second element array is %d\n", &(arr[1]));
    printf("Address of third element array is %d\n", &(arr[2]));


    printf("Address of first element array is %d\n", (arr[0]));
    printf("Address of second element array is %d\n", (arr[1]));
    printf("Address of third element array is %d\n", (arr[2]));


    printf("Address of third element array is %d\n", (arr[2]));
    printf("Address of third element array is %d\n", *(arr+2));
    printf("Address of third element array is %d\n", *(2+arr));
    printf("Address of third element array is %d\n", (2[arr]));

    return 0;
}