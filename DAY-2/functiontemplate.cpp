#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
int main()
{
    cout << myMax<int>(3, 4) << endl;
    cout << myMax<double>(3.0, 8.0) << endl;
    cout << myMax<char>('g', 'e') << endl;
}