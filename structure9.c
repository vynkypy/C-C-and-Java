#include<stdio.h>

struct Demo
{
    int no;
    int data;

};


int main()

{
    struct Demo dobj;

    struct Demo *ptr = &obj;
    obj.no = 11;

    ptr->data = 21;
    return 0;
}