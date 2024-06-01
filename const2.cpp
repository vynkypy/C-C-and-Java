#include<iostream>

using namespace std;

class Demo{
    public:
        // const int X = 11;
        // const int Y = 21;       
        const int X;
        const int Y;
        int Z;

        Demo(int i, int j, int k) : X(i), Y(j) //  Initialization list

        {
            cout << "Inside COnstrutor\n";
            Z = k;
            // X = i;
            // Y = j;

        }
};
int main()
{
    Demo obj1(11,21,50);

    // cout << obj1.X<<"\n";
    // cout << obj1.Y<<"\n";
    cout << obj1.Z<++<"\n";
    return 0;
}