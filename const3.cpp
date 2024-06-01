#include<iostream>

using namespace std;

class Demo{
    public:
        // const int X = 11;
        // const int Y = 21;       
        int X, Y;
        Demo()
        {
            X =10;
            Y =20;

        }
        
        void Fun()          //non constant fuction
        {
            cout << "Inside Fun\n";
            X++;
            Y++;
            
        }        
        
        void Gun() const        //constant function
        {
            cout << "Inside Fun\n";
            // X++;
            // Y++;
        }
};
int main()
{
    Demo obj1;
    const Demo obj2;

    obj1.Fun();      //  Normal Object Normal Funtion
    obj1.Gun() ;     //  Normal Object Constant Funtion
    obj2.Fun()  ;    //  Constant Object Normal Funtion          Not Allowed
    obj2.Gun()   ;   //  Constant Object Constant Funtion
    return 0;
}