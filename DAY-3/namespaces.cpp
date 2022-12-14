#include <iostream>
using namespace std;

namespace firstname{
    void fun(){
        cout<<"Hi I am first space"<<endl;
    }
}

namespace secondname{
    void fun(){
        cout<<"Hi I am second space"<<endl;
    }
}
using namespace firstname;
int main(){

    secondname::fun();
    fun();
    return 0;
}