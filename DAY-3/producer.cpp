#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <chrono>
#include <queue>

using namespace std;

// condition_variable cond_var;
// mutex m;

int main()
{
    int c = 0;
    bool done = false;
    queue<int> goods;

    thread producer([&]()
                    {
                       for(int i=0;i<500;i++){
                        goods.push(i);
                        c++;
                       }
                       done=true; });

    thread consumer([&]()
                    {
                        while (!done)
                        {
                            while (!goods.empty())
                            {
                                goods.pop();
                                c--;
                            }
                        } });
    producer.join();
    consumer.join();
    cout << "Net :" << c << endl;
    return 0;
}