// #include <iostream>

// using namespace std;

// class Counter 
// {
//     private:
//         int count; // Private non-static variable

//     public:
//         Counter() : count(0) {} // Constructor to initialize count

//         void increment() 
//         {
//             count++; // Increment count
//         }

//         static void printCount(Counter obj) 
//         {
//             // Accessing private non-static variable using object
//             cout << "Current count: " << obj.count << "\n";
//         }
// };

// int main() 
// {
//     Counter obj1; // Creating an object of Counter

//     obj1.increment(); // Increment count
//     obj1.increment(); // Increment count
//     obj1.increment(); // Increment count

//     // Calling the static method to print count
//     Counter::printCount(obj1);

//     return 0;
// }

#include <iostream>
using namespace std;

class Demo {
public:
    void fun(int i) {
        cout << "First definition";
    }
    void fun(int i, int j) {
        cout << "Second definition";
    }
};

int main() {
    Demo obj;
    obj.fun(10);
    obj.fun(10, 20);
    return 0;
}
