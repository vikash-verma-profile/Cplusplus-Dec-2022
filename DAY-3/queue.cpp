#include <iostream>
#include <queue>
using namespace std;

void showpq(priority_queue<int> gq)
{

    priority_queue<int> g = gq;
    while (!g.empty())
    {
        cout << g.top()<<endl;
        g.pop();
    }

    priority_queue<int,vector<int>,greater<int>> mh;
}
int main()
{
    priority_queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);
    showpq(gquiz);
    return 0;
};