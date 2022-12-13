#include <string> //for string class
#include <iostream>
#include <cstdio>
// #include <cmath>
// #include <bits/stdc++.h>

using namespace std;
// stringstream
// strtok

// char * strtok(char str[],const char *delims)
int main()
{

    char str[] = "Vikash-Verma";
    char *tok = strtok(str, "-");
    char *tokene = strtok(str, "-");

    while (tokene != NULL)
    {
        cout << tokene;
        tokene = strtok(NULL, "-");
    }
    return 0;
}