#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stack1;
    stack<int> stack2;
    // stack.push(21);
    // stack.push(23);
    // stack.push(24);
    // stack.emplace(6);
    // stack.push(25);

    // while (!stack.empty())
    // {
    //     cout << stack.top() << endl;
    //     stack.pop();
    // }

    stack1.push(21);//copy
    stack1.push(23);
    stack2.emplace(1);
    stack2.emplace(2);
    // while (!stack1.empty())
    // {
    //     cout << stack1.top() << endl;
    //     stack1.pop();
    // }
    cout << size(stack1)<<endl;
    cout << size(stack2)<<endl;
    return 0;
};