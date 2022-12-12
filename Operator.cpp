#include <iostream>
using namespace std;
class OpeatorOverload
{
    int x, y;

public:
    // OpeatorOverload(int x, int y)
    // {
    //     this->x = x;
    //     this->y = y;
    // }
    OpeatorOverload(){
        
    }
    OpeatorOverload(int _x , int _y)
    {
        x = _x;
        y = _y;
    }
    OpeatorOverload operator*(OpeatorOverload &obj)
    {
        OpeatorOverload res;
        res.x = x * obj.x;
        res.y = y * obj.y;
        return res;
    }
    void print()
    {
        cout << x << y;
    }
};
int main()
{
    OpeatorOverload M1(1, 2), M2(3, 4);
    OpeatorOverload M3 = M1 * M2;
    M3.print();
}