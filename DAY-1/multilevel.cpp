#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Hi I am A"<<endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Hi I am B"<<endl;
    }
};
class C : public B
{
public:
    C()
    {
        cout << "Hi I am C"<<endl;
    }
};
int main()
{
    C c;
    return 0;
}