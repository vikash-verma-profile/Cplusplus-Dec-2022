#include <iostream>
using namespace std;

struct mystruct
{
    int x;
    int y;
    char c;
    bool b;
};
int main()
{
    mystruct s;
    s.x = 5;
    s.y = 10;
    s.c = 'a';
    s.b = true;
    int *p = reinterpret_cast<int*>(&s);
    cout << sizeof(s) << endl;
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p++;
    char *ch = reinterpret_cast<char *>(p);
    cout << *ch << endl;
    ch++;
    bool *n = reinterpret_cast<bool *>(ch);
    cout << *n << endl;
    return 0;
}

/*
12
5
10

*/
