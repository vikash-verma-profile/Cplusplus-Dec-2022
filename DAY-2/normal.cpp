#include <iostream>
using namespace std;

// template <class T>

class MSart2{
    
    public:
    int num;
    MSart2(int j){
        num=j;
    }
    MSart2* operator ->(void) {
        cout<<"Hi";
        return this;
    }
};
class SmartPtr
{
    int *ptr; // actual pointer

public:
    int x;
    SmartPtr(int _x)
    {
        x = _x;
    }
    explicit SmartPtr(int *p = NULL) { ptr = p; }
    // destructor
    ~SmartPtr()
    {
        // cout << "I am called" << endl;
        delete (ptr);
    }
    // overloading derefencing operator
    int &operator*()
    {
        cout << "Hi I am in operator" << endl;
        return *ptr;
    }
    // Overloading arrow operator so that members of
    //  T can be accessed like a pointer
    // used if T represents a class or struct or union type
    SmartPtr *operator->(void)
    {
        cout << "Hello hi";
        return this;
    }
};

int main()
{
    // SmartPtr ptr(new int());
    // *ptr = 20;
    // cout << *ptr << endl;
    // SmartPtr ptr2(5);
    // SmartPtr *ptr1 = &ptr2;
    // //ptr1->x = 10;
    // cout << endl<< ptr1->x;

    MSart2 p(5);
    MSart2* ptr=&p;
    cout<<ptr->num;
    cout<<p->num;
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