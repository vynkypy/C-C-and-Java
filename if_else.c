#include<stdio.h>

int main()
{
    int standard = 0;

    printf("Enter your standard:\n");
    scanf("%d", &standard);

    if(standard == 1)
    {
        printf("Your exam is at 7am\n");
    }

    else if(standard == 2)
    {
        printf("Your exam is at 8am\n");
    }
    else if(standard == 3)
    {
        printf("Your exam is at 9am\n");
    }
    else if(standard == 4)
    {
        printf("Your exam is at 10am\n");
    }

    else
    {
        printf("Wrong Standard\n");
    }

    return 0;
}