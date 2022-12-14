#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    std::ifstream fio("sample.txt");
    string line;
    // fio<<"I am new from code";
    //  fio.open("sample.txt", ios::trunc | ios::out | ios::in);
    // while (getline(fio, line))
    // {
    //     cout << line;
    // }
    fio>>line;
    std::cout<<line;
    fio.close();

    // fstream myfile;
    // myfile.open("sample.txt", ios::in);
    // char ch;

    // while (1)
    // {
    //     myfile >> ch;
    //     if (myfile.eof())
    //     {
    //         break;
    //     }
    //     cout << ch;
    // }
    // myfile.close();
    return 0;
}
