#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


//  O_RDONLY    Read mode
//  O_WRONLY    Write mode
//  O_RDWR      Read+Write mode
int main()
{   
    char Name[30];
    int fd=0;
    int iRet = 0;
    char Data[] = "Marvellous Infosystems";

    printf("Enter name of file that you want to open:\n");
    scanf("%s", Name);

    fd = open(Name, O_RDWR);

    iRet = write(fd, Data, 22);

    printf("%d bytes gets successfully written into the file\n", iRet);

    close(fd);

    return 0;
}