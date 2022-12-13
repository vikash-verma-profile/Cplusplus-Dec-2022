#include <iostream>
using namespace std;
//Call by Value
void swapTest(int &Number1,int &Number2);
int main(){
    int Number1=10,Number2=20;
    cout<<"Before calling function ";
    cout<<"Number1 ="<<Number1<<"Number2 = "<<Number2<<endl;
    swapTest(Number1,Number2);
    cout<<"After calling function ";
    cout<<"Number1 ="<<Number1<<"Number2 = "<<Number2<<endl;
    return 0;
}

//<return-type> function-name (<arguments>)
void swapTest(int &Number1,int &Number2){
    int c;
    c=Number1;
    Number1=Number2;
    Number2=c;
    cout<<"Inside function ";
    cout<<"Number1 ="<<Number1<<"Number2 = "<<Number2<<endl;
}