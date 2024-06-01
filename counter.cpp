#include <iostream>

using namespace std:
class Counter 
{
    private:
        static int count; // Private static variable

    public:
        Counter() 
        {
            count++; // Increment count each time a Counter object is created
        }

        static int getCount() 
        io{
            return count; // Return the current count
        }
};

// Initialize private static variable outside the class
int Counter::count = 0;

int main() 
{
    // Creating Counter objects
    Counter obj1;
    Counter obj2;
    Counter obj3;

    // Getting the current count
    cout << "Current count: " << Counter::getCount() << "\n";

    // Creating more Counter objects
    Counter obj4;
    Counter obj5;

    // Getting the updated count
    cout << "UPdate count: " << Counter::getCount() << "\n";

    return 0;
}
