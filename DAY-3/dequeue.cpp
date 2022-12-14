#include <iostream>
// #include <forward_list>
#include <list>
using namespace std;

// void showdq(deque<int> g1)
// {
//     deque<int>::iterator it;
//     for (it = g1.begin(); it != g1.end(); ++it)
//     {
//         cout << *it << " ";
//     }
// }

void showlist(list<int> g1)
{
    list<int>::iterator it;
    for (it = g1.begin(); it != g1.end(); ++it)
    {
        cout << *it << " ";
    }
}
int main()
{

    list<int> gdeq1;
    list<int> gdeq2;
    for (int i = 0; i < 10; ++i)
    {
        gdeq1.push_back(i * 2);
        gdeq1.push_front(i * 3);
    }
    showlist(gdeq1);
    cout<<"==================="<<endl;
    showlist(gdeq2);
    // deque<int> gdeq;
    // gdeq.push_back(10);
    // gdeq.push_back(20);
    // gdeq.push_front(30);
    // showdq(gdeq);
    // cout << gdeq.size();
    // cout << gdeq.at(2);

    // forward_list<int> flist1;
    // forward_list<int> flist2;
    // forward_list<int> flist3;
    // flist1.assign({1, 2, 3});
    // flist2.assign({5, 10});
    // flist3.assign(flist1.begin(), flist1.end());

    // for (int &a : flist1)
    // {
    //     cout << a << endl;
    // }
    // cout<<"==================="<<endl;
    // for (int &b : flist2)
    // {
    //     cout << b << endl;
    // }
    //  cout<<"==================="<<endl;
    // for (int &c : flist3)
    // {
    //     cout << c << endl;
    // }
}

/*
array=static
vector=dynamic
deque double ended queue
forward-list=singly-linked list
list-double linked list
*/