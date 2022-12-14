#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <atomic>
#include <future>
#include <chrono>

using namespace std;
// int accum = 0;
// mutex accum_mutex;

atomic<int> accum(0);
// void square(int x)
// {
//     accum += x * x;
// }
int square(int x)
{
    return x * x;
}

// void square(int x)
// {
//     int temp=x*x;
//     accum_mutex.lock();
//     accum += temp;
//     accum_mutex.unlock();
// }

int main()
{
    // vector<thread> ths;
    // for (int i = 1; i <= 20; i++)
    // {
    //     ths.push_back(thread(&square, i));
    // }
    // for (auto &th : ths)
    // {
    //     th.join();
    // }
    // cout << "accum" << accum << endl;

    // auto a = async(&square, 10);
    // int v = a.get();
    // cout << "The thread returns " << v << endl;

    vector<future<int>> ths;
    for (int i = 1; i <= 20; i++)
    {
        ths.push_back(async(&square, i));
    }
    // vector<future<int>> :: iterator it;

    for (auto it = ths.begin(); it != ths.end(); ++it)
    {
        accum = accum + it->get();
    }

    cout << "accum" << accum << endl;
    return 0;
}