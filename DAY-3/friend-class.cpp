// class Node
// {
// private:
//     int key;
//     Node *next;

//     friend class LinkedList;
// };

#include <iostream>
using namespace std;

class A
{

protected:
    int x;

public:
    A()
    {
        x = 10;
    }
    friend class B;
};
class B
{
public:
    void display(A &t)
    {
        cout << endl
             << "Value of x=" << t.x;
    }
};
int main()
{
    A _a;
    B _b;
    _b.display(_a);
    return 0;
}