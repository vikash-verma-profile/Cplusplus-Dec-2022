#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base()
    {
        cout << "Hi";
    }
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
struct shapeA
{
    virtual void draw() = 0;
};
struct shapeB : shapeA
{
    virtual void draw() {}
};
int main()
{
    Derived d;
    return 0;
}