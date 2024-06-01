#include<iostream>

using namespace std;

float area(float radius, float pi = 3.14)
{
    float ans =0.0f;
    ans =  pi * radius*radius;
    return ans;

}

int main()
{
    float ret = 0.0f;

    ret = area(5.8, 7.20);

    cout << "Area of a circle is : " << ret << "\n";
    
    ret = area(5.8);

    cout << "Area of a circle is : " << ret << "\n";

    return 0;
}