#include<stdio.h>

int x = 121;

void vynky()
{
    int i = 25;
    int no = 101;
    printf("from vynky no is %d\n", no);
    printf("from vynky i is %d\n", i);
    printf("from vynky no is %d\n", x);


}
int main()

{

    int no = 11;

    printf("from main no is %d\n", no);
    printf("from main x is %d\n", x);
    
    vynky();

    return 0;
}