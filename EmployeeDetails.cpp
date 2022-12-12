#include <iostream>
using namespace std;

class EmpDetails
{
    int EmployeeID;
    string EmployeeName;
    string EmployeeGender;
    int EmployeeSalary;

public:
    EmpDetails(int eId,string eName,string eGender,int eSalary){
        EmployeeID=eId;
        EmployeeName=eName;
        EmployeeGender=eGender;
        EmployeeSalary=eSalary;
    }
    EmpDetails(EmpDetails &e){
        EmployeeID=e.EmployeeID;
        EmployeeName=e.EmployeeName;
        EmployeeGender=e.EmployeeGender;
        EmployeeSalary=e.EmployeeSalary;
    }
    void ReadInputs();
    void DisplayDetails();
};

void EmpDetails::ReadInputs()
{
    cout << "Give Employee ID" << endl;
    cin >> EmployeeID;

    cout << "Give Emp Name" << endl;
    cin >> EmployeeName;

    cout << "Give Gender" << endl;
    cin >> EmployeeGender;

    cout << "Give Employee Salary" << endl;
    cin >> EmployeeSalary;
}

void EmpDetails::DisplayDetails()
{
    cout << " Employee ID:" << EmployeeID << endl;
    cout << " Employee Name:" << EmployeeName << endl;
    cout << " Employee Gender:" << EmployeeGender << endl;
    cout << " Employee Salary:" << EmployeeSalary << endl;
}

int main()
{
    EmpDetails empD(101,"Vikash Verma","Male",1000);
    EmpDetails empD2(empD);
    //empD.ReadInputs();
    empD.DisplayDetails();
    empD2.DisplayDetails();
    return 0;
}