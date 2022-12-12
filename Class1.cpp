#include <iostream>
using namespace std;

class Sample
{
    // Access specifier

public:
    string a;
    int b;
    void display();
};
void Sample::display()
{
    cout << "Vikash";
}
int main()
{

    Sample s;
    s.a = "vikash";
    cout << s.a << s.b;
    s.display();
    return 0;
}