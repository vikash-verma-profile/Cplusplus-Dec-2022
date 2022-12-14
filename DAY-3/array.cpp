#include <iostream>
#include <array>
#include <vector>
// #include <tuple>

using namespace std;
int main()
{
    // array<int, 6> ar = {1, 2, 3, 4, 5};
    // cout << ar.at(1);
    // cout << ar[1];
    // cout << get<0>(ar);
    // cout << ar.front();
    //  cout << ar.back();
    vector<int> g1;

    for (int i = 0; i <= 5; i++)
    {
        g1.push_back(i);
    }

    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout << *i << " ";
    }
}

/*
array=static
vector=dynamic
deque double ended queue
forward-list=singly-linked list
list-double linked list
*/