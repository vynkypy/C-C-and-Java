#include<iostream>

using namespace std;

class Base
{

    public:
        int A;
    private:
        int B;
    protected:
        int C;
    
    public:
        Base()
        { A = 10, B= 20, C =30; }
        
        void fun()
        {
            cout<<A<<"\n";  //Allowed -- because in same function of class
            cout<<B<<"\n";  //Allowed -- because in same function of class
            cout<<C<<"\n";  //Allowed -- because in same function of class
            
        }
};

class Derived : public Base
{
    public:
        void gun()
        {
            cout<<A<<"\n";  //Allowed -- because in same function of class
            cout<<B<<"\n";  //Not Allowed -- because it's only for that class (private)
            cout<<C<<"\n";  //Allowed -- because in same function of class (Protected - only available for child class(imediate derived object))

        }
};


int main()
{
    Base bobj;

    cout<<bobj.A<<"\n"; //Allowed -- because in same function of class
    cout<<bobj.B<<"\n"; //Not Allowed -- because it's only for that class (private)
    cout<<bobj.C<<"\n"; //Not Allowed -- Not an immediate object.

    return 0;

}