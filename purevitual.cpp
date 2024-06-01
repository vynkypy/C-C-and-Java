#include<iostream>

using namespace std;
class Base
{
    public:
        int A, B;
        // int B;
        Base()
        {   cout << "Base Constructor\n";}
        int Addition(int i, int j)                      // 1000
        {   return i+j; }
        
        virtual int Substraction(int i, int j)          // 2000
        {   return i - j;   }

        virtual int Multiplication(int i, int j) = 0;


};

class Derived : public Base
{
    public:
        int X, Y;
        Derived()
        {   cout << "Derived COnstructor\n";}
        int Substraction(int i, int j)                  //3000
        {   return i - j;   }

        int Multiplication(int i, int j)                //4000
        {   return i * j;   }

        virtual int Division(int i, int j)              //5000
        {   return i/j; }

};

int main()
{
    // Base bobj;
    Derived dobj;
    Base *bp = &dobj;

    cout << bp-> Addition(10,11)<<"\n";             // Base addition called
    cout << bp-> Substraction(10,11)<<"\n";         // Derived Substraction Called
    cout << bp-> Multiplication(10,11)<<"\n";       // Derived Multiplication Called
    // cout << bp-> Division(120,10)<<"\n";            // Error

    return 0;
}