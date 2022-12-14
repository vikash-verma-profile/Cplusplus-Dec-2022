#include <iostream>
// #include <set>
#include <map>
using namespace std;
int main()
{
    // set<char> a;
    // a.insert('V');
    // a.insert('I');
    // a.insert('K');
    // a.insert('A');
    // a.insert('S');
    // a.insert('H');
    // for (auto &str : a)
    // {
    //     cout << str << " ";
    // }
    map<int, int> quiz;
    quiz.insert(pair<int, int>(1, 40));
    quiz.insert(pair<int, int>(2, 50));
    quiz.insert(pair<int, int>(3, 60));
    quiz.insert(pair<int, int>(4, 70));

    quiz[1] = 10;

    map<int, int>::iterator it;
    for (it = quiz.begin(); it != quiz.end(); ++it)
    {
        cout << it->first << "==>" << it->second<<endl;
    }
    return 0;
}