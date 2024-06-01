#include<iostream>
#include<stdlib.h>
using namespace std;


class Demo
{
    public:
        int A,B;
        Demo()
        {
            cout << "Inside a constructor\n";
            A = 11;
            B = 21;

        }

        ~Demo()
        {
            cout << "Inside Destructor";

        }

        void Fun()
        {

            cout << "Inside Fun Function\n";

        }
};

int main()
{

    // Demo obj1;
    // obj1.Fun();
    // obj1.A;
    // obj1.B;

    Demo *p = new Demo;
    // Demo *p = (Demo *) malloc(sizeof (Demo));

    p -> Fun();
    
    cout<< p->A<<"\n";
    cout<< p->B<<"\n";
    
        // free(p);
    delete p;

    return 0;
}