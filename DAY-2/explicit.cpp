#include <iostream>
using namespace std;

class Complex
{
private:
    double x;
    double y;

public:
    explicit Complex(double _x = 0.0, double _y = 0.0) : x(_x), y(_y)
    {
    }
    bool operator==(Complex rhs)
    {
        return (x == rhs.x && y == rhs.y);
    }
};
int main()
{

    Complex cmp(6.0, 0.0);
    if (cmp == 6.0)
    {
        cout << "Same";
    }
    else
    {
        cout << "Not same";
    }

    return 0;
}