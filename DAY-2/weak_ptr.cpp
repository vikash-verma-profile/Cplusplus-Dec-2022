#include <iostream>
using namespace std;
#include <memory>

// unique_ptr

int main()
{
    // Old,problem with dangling pointer
    int *ptr = new int(10);
    int *ref = ptr;
    delete ptr;

    // new solution
    // check expired or lock to check wether if pointer is valid

    // empty
    std::shared_ptr<int> sptr;

    // take ownership of pointer
    sptr.reset(new int);
    *sptr = 10;

    // get pointer to data without taking ownership
    std::weak_ptr<int> weak1 = sptr;

    // delete managed object and acquire new pointer
    sptr.reset(new int);
    *sptr = 5;

    // get pointer to data without taking ownership
    std::weak_ptr<int> weak2 = sptr;

    // weak 1 is expired !!
    if (auto temp = weak1.lock())
    {
        std::cout << "weak value is :" << *temp << '\n';
    }
    else
    {
        std::cout << "Weak 1 is expired \n";
    }
    // weak 2 points to new data(5)
    if (auto tmp = weak2.lock())
    {
        std::cout << "weak 2 value is :" << *tmp << '\n';
    }
    else
    {
        std::cout << "Weak 2 is expired \n";
    }

    return 0;
}
