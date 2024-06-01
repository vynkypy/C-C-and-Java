#include<stdio.h>
struct Hello
{
    int no;
    float f;

};

struct Demo
{
    int data;
    struct Hello hobj;

};


int main()

{
    struct Demo dobj;

    dobj.data = 11;
    dobj.hobj.no = 21;
    donj.hobj.f = 90.88;
    
    return 0;
}