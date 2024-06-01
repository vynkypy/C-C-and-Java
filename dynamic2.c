#include<stdio.h>
#include<stdlib.h>      //for malloc, calloc, realloc & free


int main()
{
    int Arr[5];     // Static Memory Allocation

    int Size = 0;

    int *ptr = NULL;

    printf("Number of elements you want : \n");
    scanf("%d", &Size);

    ptr = (int *)calloc(Size , sizeof(int));

    //use the memory

    free(ptr);


    return 0;
}

