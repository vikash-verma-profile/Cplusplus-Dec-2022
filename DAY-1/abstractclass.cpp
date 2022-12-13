#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    // pure Virtual function
    virtual void fun() = 0;
    int getX() { return x; }
};
class Derived : public Base
{
    int y;

public:
    void fun()
    {
        cout << "Hi i am making fun";
    }
};

int main()
{
    //Base b;
    // Derived d;
    // d.fun();
    // Base b;
    //we Can Have Pointers and referneces of abstract class
    Base *bp=new Derived();
    bp->fun();
    return 0;
}