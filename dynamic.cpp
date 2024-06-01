#include<iostream>

using namespace std;


int main()
{
    int * ptr = NULL;
    int Size = 0;

    cout << "Enter the size of an Array : \n";
    cin >> Size;

    ptr = new int[Size];             //Malloc cha syntax --> ptr = (int *) malloc (Size * sizeof(int));
    // Use of memory

    delete []ptr;

    
    return 0;
}