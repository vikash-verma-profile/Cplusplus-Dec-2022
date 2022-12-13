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
class Car:public Vehicle
{

};
class Bus : public Vehicle
{
    
};
int main()
{
    Car obj;
    Bus bus;
    return 0;
}