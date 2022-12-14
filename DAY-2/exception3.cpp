#include <iostream>
using namespace std;
class A{};

class B
{
public:
    B(const A &e)
    {
        cout << "Conversion constructor called";
    }
};
int main()
{
    try
    {
        A a;
        throw a;
    }
    catch (B b)
    {
        cout << "Caught B" << endl;
    }
    catch (...)
    {
        cout << "Default catch block";
    }
    return 0;
}