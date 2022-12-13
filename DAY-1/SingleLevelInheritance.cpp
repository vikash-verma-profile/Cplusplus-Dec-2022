#include <iostream>
using namespace std;

class Person
{
    int id;
    string name;

public:
    void getDetails()
    {
        cout << "Enter the Id:";
        cin >> id;
        cout << "Enter the name";
        cin >> name;
    }
    void printDetails()
    {
        cout << endl
             << id << "\t" << name << "\t";
    }
};
class Student:private Person{
    string course;
    int fees;
    public:
    void getStudentDetails(){
        getDetails();
        cout<<"Enter Course Name :";
        cin>>course;
        cout<<"Enter Course Fees";
        cin>>fees;
    }
    void printStudentDetails(){
        printDetails();
        cout<<course<<"\t"<<fees<<endl;
    }
};
int main()
{
    Student s;
    s.getStudentDetails();
    s.printStudentDetails();
    //s.printDetails();
    return 0;
}