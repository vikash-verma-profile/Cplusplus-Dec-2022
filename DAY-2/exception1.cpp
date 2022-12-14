#include <iostream>
using namespace std;

void f1()
{
    cout << "f1 Start" << endl;
    throw 100;
    cout << "f1 End" << endl;
}

void f2()
{
    cout << " f2 Start" << endl;
    f1();
    cout << "f2 End" << endl;
}

void f3()
{
    cout << "f3 Start" << endl;
    try
    {
        f2();
    }
    catch (int i)
    {
        cout << "Exception comes ==>" << i << endl;
    }
    cout << "f3 End" << endl;
}
int main()
{
    f3();
    return 0;
}