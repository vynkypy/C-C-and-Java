#include <stdio.h>

int main()
{
    int i = 11;
    char ch = 'A';
    float f = 78.88;
    double d = 88.9876;


    int Arr[5];                     //20 bytes
    double Brr[5];                  //40 bytes
    float Crr[5];                   //20 bytes
    char Drr[5];                    //5 bytes

    printf("%d\n",sizeof(i));       //4
    printf("%d\n",sizeof(ch));      //1
    printf("%d\n",sizeof(f));       //4
    printf("%d\n",sizeof(d));       //8


    printf("%d\n",sizeof(Arr));    
    printf("%d\n",sizeof(Brr));     
    printf("%d\n",sizeof(Crr));       
    printf("%d\n",sizeof(Drr));
    return 0;
}

