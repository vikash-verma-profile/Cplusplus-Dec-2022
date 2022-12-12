#include <iostream>
using namespace std;
class MethodOverload
{
public:
    void func(int x)
    {
        cout << "x=" << x << endl;
    }
    void func(double x)
    {
        cout << "x=" << x << endl;
    }
    void func(int x, int y)
    {
        cout << "x=" << x << endl
             << "y=" << y << endl;
    }
};
int main()
{
    MethodOverload M;
    M.func(4);
    M.func(9.89);
    M.func(1, 2);
    return 0;
}