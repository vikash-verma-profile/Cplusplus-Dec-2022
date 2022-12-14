// static cast
// dynamic cast
// const cast
// reinterpret cast
#include <iostream>
using namespace std;
class base
{
public:
    virtual void car()
    {
        cout << "base";
    }
};
class derived : public base
{
public:
    void gun()
    {
        cout << "derived";
    }
};
int main()
{
    // float f = 3.5;
    // int a = f;

    // int b = static_cast<int>(f);

    derived d;
    base *b = dynamic_cast<base *>(&d);

    derived *d1 = dynamic_cast<derived *>(b);

    if (d1 == nullptr)
    {
        cout << "null" << endl;
    }
    else
    {
        cout << "not null";
    }
    return 0;
}
