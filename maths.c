#include<stdio.h>
int Addition(int no1, int no2)
{
    int ans = 0;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int a =10;
    int b= 11;
    int ret = 0;

    printf("Inside main function\n");

    ret = Addition(a,b);
    printf("Addition of A and B is: %d\n",ret);

    return 0;
}