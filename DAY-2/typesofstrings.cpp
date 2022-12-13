#include <iostream>
#include <string> //for string class
#include <vector>
#include <array>
using namespace std;

int main()
{

    const char *Names[4] = {"Vikash", "Ram", "Rajesh", "Sumit"};
    char Names[4][10] = {"Vikash", "Ram", "Rajesh", "Sumit"};
    std::string SNames[4] = {"Vikash", "Ram", "Rajesh", "Sumit"};
    std::vector<std::string> VNames {"Vikash", "Ram", "Rajesh", "Sumit"};
    VNames.push_back("Ramesh");
    std::array<std::string,4> ANames {"Vikash", "Ram", "Rajesh", "Sumit"};
    return 0;
}