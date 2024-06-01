#include <stdio.h>
#pragma pack(1)
    struct student 
    {
        int RollNo;
        char Division;
        int Age;
        float Marks;
        int Salary;    
    };


int main()

{

    struct student vynky;
    printf("Size of object %d\n", sizeof(vynky));

    return 0;
}