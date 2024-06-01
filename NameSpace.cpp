#include<iostream>

// using namespace std;    //inbuilt Namespace

namespace Marvellous
{
    class Demo
    {
        //Logic
    };
}


namespace PPA
{
    class Hello
    {
        //Hello
    };
}

using namespace Marvellous;
int main()
{
    std :: cout<<"Inside Main....";
    Demo dobj;
    PPA :: Hello hobj;
    return 0;
}