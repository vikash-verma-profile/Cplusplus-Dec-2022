#include <iostream>
#include <string> //for string class
using namespace std;

int main(){

    string str;
    cout<<"Please input some string";
    getline(cin,str);

    //getline(is,str,delim)

    cout<<"The initial string is :";
    cout<<str<<endl;
    str.push_back('v');
    cout<<"After apending the character"<<str;
    str.pop_back();
    cout<<"After deleting the character"<<str;
    return 0;
}