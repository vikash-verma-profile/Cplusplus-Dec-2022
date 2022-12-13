#include <iostream>
#include <string> //for string class
using namespace std;

int main(){

    string str="Vikash Verma is a good boy";
    // 1 Byte
    //9 +1 =>10 bytes
    // cout<<"Please input some string ";
    // getline(cin,str);

    //getline(is,str,delim)

    // cout<<"The initial string is :";
    // cout<<str<<endl;
    // str.push_back('v');
    // cout<<"After apending the character"<<str;
    // str.pop_back();
    // cout<<"After deleting the character"<<str;

    // str.resize(18);
    // cout<<"After resizing ";
    // cout<<str<<endl;
    // cout<<str.capacity()<<endl;// it will be return the size of the storage space currenyly allocated
    // // cout<<str.size();
    // str.shrink_to_fit();
    // cout<<str<<endl;
    // cout<<str.capacity()<<endl;

    //declaring the iterator
    std::string::iterator it;

    //declare the reverse_iterator
    std::string::reverse_iterator it1;

    cout<<str<<endl;
    cout<<"using forward iterator";
    for(it=str.begin();it!=str.end();it++){
       if(it==str.begin())*it='v';
        cout<<*it;
    }
    cout<<endl;
    return 0;
}


//string functions
/*
-begin()
-end()
-rbegin()
-rend()

*/