#include<iostream>

using namespace std;

class Demo // Class Declaration
{
    public:     // Access Specifier
        int no1;        // Characteristics
        int no2;        // Characteristics

        Demo()  // Constructor
        {
            cout<<"Inside Constructor\n";
            no1 = 11;
            no2 = 21;

        }

        ~Demo() // Destructor
        {
            cout<<"Inside Destructor\n";
        }

        void fun()  // Behaviour
        {
            cout<<"Inside Fun od Demo Class\n";
        }

};

int main()
{
    cout<<"Inside Main\n";

    Demo obj1;

    cout<<"Size of object is : "<<sizeof(obj1)<<"\n" ;  
    cout<<"Value of No1 : "<<obj1.no1<<"\n";
    cout<<"Value of No2 : "<<obj1.no2<<"\n";
    obj1.fun();

    return 0;
}