#include <iostream>
using namespace std;

void Sample()
{
    cout << "Hi ai am sample";
}
void fun()
{
    cout << "Hi i am in fun";
    return Sample();
}

void test()
{
    cout << "Hi i am in fun";
    return (void)"Test";
}
int main()
{
    test();
    return 0;
}