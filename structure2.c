#include<stdio.h>


struct vynky
{   
    int no;
    double f;
    int i;


};



int main()
{
    struct vynky vobj;

    struct vynky *ptr = &vobj;

    ptr-> no  = 11;
    ptr-> f = 90.9999;
    ptr-> i = 21;

    printf("%d\n", ptr->no);
    printf("%d\n", vobj.no);
    printf("%d\n", sizeof(vobj));
    return 0;
}