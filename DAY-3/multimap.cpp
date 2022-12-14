#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> a;
    a.insert(pair<int, int>(1, 40));
    a.insert(pair<int, int>(2, 40));
    a.insert(pair<int, int>(3, 40));
    a.insert(pair<int, int>(4, 40));
    a.insert(pair<int, int>(5, 40));
    a.insert(pair<int, int>(1, 40));
    a.insert(pair<int, int>(3, 40));

    multimap<int, int>::iterator itr;
    for (itr = a.begin(); itr != a.end(); ++itr)
    {
        cout << itr->first << endl;
    }

    return 0;
}