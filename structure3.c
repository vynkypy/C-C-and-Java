#include <stdio.h>

    struct student 
    {
        int RollNo;
        char Division;
        int Age;
        double Marks;
        int Salary;    
    };


int main()

{

    struct student vynky;
    struct student Pooja;
    printf("Size of object %d\n", sizeof(vynky));

    vynky.RollNo = 11;
    vynky.Division = 'A';
    vynky.Age = 25;
    vynky.Marks = 99.99;
    vynky.Salary = 30000;    
    
    Pooja.RollNo = 12;
    Pooja.Division = 'D';
    Pooja.Age = 20;
    Pooja.Marks = 89.99;
    Pooja.Salary = 8000;

    printf("Age of Vynky is %d\n", vynky.Age);
    printf("Age of Pooja is %d\n", Pooja.Age);
    printf("Salary of Vynky is %lu\n", vynky.Salary);
    printf("Salary of Pooja is %lu\n", Pooja.Salary);
    


    return 0;
}