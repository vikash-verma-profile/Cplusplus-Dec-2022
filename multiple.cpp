#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle \n";
    }
};
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is 4 wheeler \n";
    }
};
class Car : public Vehicle, public FourWheeler
{
};
int main()
{
    Car obj;

    return 0;
}