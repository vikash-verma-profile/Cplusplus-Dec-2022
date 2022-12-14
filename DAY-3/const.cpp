#include <iostream>
using namespace std;

class student
{
private:
    int roll;

public:
    student(int r) : roll(r) {}
    // void setRoll(int r)
    // {
    //     this->roll = r;
    // }
    void fun() const
    {
        (const_cast<student *>(this))->roll = 5;
       // this->roll=5;
    }
    int getRoll()
    {
        return roll;
    }
};

int main()
{
    student s(3);
    cout << "Old Roll Number" << s.getRoll() << endl;
    s.fun();
    cout << "New Roll Number" << s.getRoll() << endl;
    // s.setRoll(8);
    cout << "New Roll Number" << s.getRoll() << endl;
    return 0;
}
