#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int, greater<int>> a;
    multiset<int> b;
    a.insert(40);
    a.insert(30);
    a.insert(60);
    a.insert(50);
    a.insert(20);
    a.insert(20);
    multiset<int, greater<int>>::iterator itr;
    for (itr = a.begin(); itr != a.end(); ++itr)
    {
        cout << *itr << endl;
    }

    return 0;
}