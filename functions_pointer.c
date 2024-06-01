#include<stdio.h>

int Multiplication(int No1, int No2)
{
    int ans = 0;
    ans = No1 * No2;
    return ans;
}


int main()

{   
    int val1 = 0, val2 = 0, ret=0;

    int (*fptr) (int, int);

    fptr = Multiplication;

    printf("Enter first number: \t");
    scanf("%d", &val1);


    printf("Enter second number: \t");
    scanf("%d", &val2);

    ret = fptr(val1, val2);

    printf("Multiplication is:\t%lu ",ret);

    return 0;
}