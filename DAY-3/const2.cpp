#include <iostream>
using namespace std;

// int fun(int *ptr)
// {
//     *ptr = *ptr + 10;
//     return (*ptr);
// }

int main()
{
    // const int val = 10;
    // const int *ptr = &val;
    // int *ptr1 = const_cast<int *>(ptr);
    // fun(ptr1);
    // cout << val;

    int a1=40;
    const int* b1=&a1;
    char* c1=const_cast<char *>(b1);
    *c1='A';
    return 0;
}
