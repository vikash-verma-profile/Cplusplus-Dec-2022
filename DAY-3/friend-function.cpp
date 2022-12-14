#include <iostream>
using namespace std;

class Largest
{

    int a, b, m;

public:
    void set_data();
    friend void findMax(Largest);
};
void Largest::set_data()
{
    a = 10;
    b = 20;
}
void findMax(Largest t)
{
    if (t.a > t.b)
    {
        t.m = t.a;
    }
    else
    {
        t.m = t.b;
    }
    cout << "Maximum Number is " << t.m;
}
int main()
{
    Largest l;
    l.set_data();
    findMax(l);
    return 0;
}