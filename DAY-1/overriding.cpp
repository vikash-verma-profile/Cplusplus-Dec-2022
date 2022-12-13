#include <iostream>
using namespace std;

// class A
// {
// public:
//     A()
//     {
//     }
//     A(int a)
//     {
//         cout << a;
//     }
// };

class base
{
public:
    void print()
    {
        cout << "Hi I am Print in Base" << endl;
    }
    void show()
    {
        cout << "Hi I am show in Base" << endl;
    }
};
class Derived : public base
{
public:
    void print()
    {
        cout << "Hi I am Print in Derived" << endl;
    }
    void show()
    {
        cout << "Hi I am show in Derived" << endl;
    }
};
int main()
{
    base *bptr;
    Derived d;
    bptr=&d;
    bptr->print();
    base b;
    b.print();
    Derived d1;
    d1.print();
    return 0;
}