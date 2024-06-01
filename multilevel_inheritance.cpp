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
        int X, Y;
        Derived()
        {
            cout<<"Inside Constructor\n";
            X = 51;
            Y = 191;


        }

        ~Derived()
        {
            cout<<"Inside Destructer\n";
        }
        void gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

class DerivedX : public Base
{
    public:
        int X, Y;
        DerivedX()
        {
            cout<<"Inside Constructor\n";
            X = 51;
            Y = 191;


        }

        ~DerivedX()
        {
            cout<<"Inside Destructer\n";
        }
        void sun()
        {
            cout<<"Inside Derived Sun\n";
        }
};
int main()
{
    DerivedX dobj;
    cout<<"Size of object is:\n"<<sizeof(dobj)
    Base bobj;

    cout<<bobj.A<<"\n"; //Allowed -- because in same function of class
    cout<<bobj.B<<"\n"; //Not Allowed -- because it's only for that class (private)
    cout<<bobj.C<<"\n"; //Not Allowed -- Not an immediate object.

    return 0;

}