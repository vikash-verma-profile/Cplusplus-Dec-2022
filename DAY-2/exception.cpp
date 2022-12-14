#include <iostream>
using namespace std;
int main()
{
    int x = -1;
    cout << "Before try" << endl;
    int y = 1;
    while (y < 3)
    {
        try
        {
            throw 10;
        }
        catch (char *x)
        {
            cout << "Exception comes" << x;
            break;
        }
        catch (int y)
        {
            cout << "Exception comes at int  ---" << x;
            break;
        }
        catch (...)
        {
            cout << "Exception comes -1" << x;
            break;
        }
        y = y + 1;
    }

    return 0;
}