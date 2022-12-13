#include <iostream>
using namespace std;

class SmartPtr
{
    int *ptr; // actual pointer

public:
    explicit SmartPtr(int *p = NULL) { ptr = p; }
    // destructor
    ~SmartPtr()
    {
        cout << "I am called"<<endl;
        delete (ptr);
    }
    // overloading derefencing operator
    int &operator*()
    {
        cout<<"Hi I am in operator"<<endl;
        return *ptr;
    }
};

int main()
{
    SmartPtr ptr(new int());
    *ptr = 20;
    cout << *ptr<<endl;
    return 0;
}

// class Rectangle
// {
// private:
//     int length;
//     int breadth;
// };

// void Print()
// {
//     Rectangle *r = new Rectangle();
// }