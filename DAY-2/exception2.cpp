#include <iostream>
using namespace std;

class Base
{
};
class Derived : public Base
{
};
int main()
{

    Derived d;
    try
    {
        throw d;
    }
    catch (Derived d)
    {
        cout << "Caught Derived Exception";
    }
    catch (Base b)
    {
        cout << "Caught base Exception";
    }
    return 0;
}