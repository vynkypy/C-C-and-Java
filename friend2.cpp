// Member function of class can be a friend of our class

#include<iostream>

using namespace std;

class Hello
{
    public:
        void Fun();
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:    
        Demo()
        {
            i = 10;
            j = 20;
            k = 40;
        }

        friend void Hello::Fun();
};


void Hello::Fun()
{
    Demo obj;
    cout << obj.i <<"\n";
    cout << obj.j <<"\n";
    cout << obj.k <<"\n";
    
}

int main()
{
    Hello hobj;
    hobj.Fun();
    return 0;
}