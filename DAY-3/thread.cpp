#include <iostream>
#include <thread>
using namespace std;
void somefunction(int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << "Thread using function"<<endl;
    }
}

class threadObj
{
public:
    void operator()(int x)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "Thread using function as a callable"<<endl;
        }
    }
};
int main()
{
    cout << "Thread 1 and 2 and 3" << endl;
    thread th1(somefunction, 3);
    thread th2(threadObj(), 3);
    auto f = [](int x)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "Thread calling" << endl;
        }
    };
    thread th3(f, 3);
    th1.join();
    th2.join();
    th3.join();
    return 0;
}