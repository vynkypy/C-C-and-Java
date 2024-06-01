#include<iostream>

using namespace std;

class Arithmatic
{
    public:
        int No1;
        int No2;

        Arithmatic()
        {
            cout<<"Inside Default constructor\n";
            No1 =0;
            No2 = 0;
            
        }        
        
        Arithmatic(int A, int B)
        {
            cout<<"Inside Parameterised constructor\n";
            No1 = A;
            No2 = B;
            
        }        
        
        Arithmatic(Arithmatic ref)
        {
            cout<<"Inside Parameterised constructor\n";
            No1 = A;
            No2 = B;
            
        }
};

int main()
{   
    Arithmatic obj1;
    Arithmatic obj2(11,21);

    cout<<obj1.No1<<"\t"<<obj1.No2<<"\n";
    cout<<obj2.No1<<"\t"<<obj2.No2<<"\n";

    return 0;
}