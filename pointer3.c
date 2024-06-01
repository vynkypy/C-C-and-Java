#include<stdio.h>

int main()
{

    int No = 11;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****y = &r;
    int *****z = &y;

    return 0;
}