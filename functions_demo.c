#include<stdio.h>

int main()

{   
    int val1 = 0, val2 = 0, ret=0;

    printf("Enter first number: \t");
    scanf("%d", &val1);


    printf("Enter second number: \t");
    scanf("%d", &val2);

    ret = val1 * val2;

    printf("Multiplication is:\t%d ",ret);

    return 0;
}