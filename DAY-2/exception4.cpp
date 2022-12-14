#include <iostream>
using namespace std;
class Test
{
    static int count;
    int id;

public:
    Test()
    {
        count++;
        id = count;
        cout << "constructor called of class Test"<<id << endl;
        if (id == 4)
        {
            throw 4;
        }
    }
    ~Test()
    {
        cout << "Destrcutor of class Test" << id << endl;
    }
};

int Test::count = 0;
int main()
{
    try
    {

        Test array[5];
    }
    catch (int i)
    {
        cout << "Caught" << i << endl;
    }
    return 0;
}