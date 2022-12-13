#include <iostream>
using namespace std;
#include <memory>


// unique_ptr

class Rectange
{

    int length;
    int breadth;

public:
    Rectange(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    shared_ptr<Rectange> up1(new Rectange(10,5));
    //cout<<up1->area()<<endl;

    shared_ptr<Rectange> up2;
    up2=up1;

   cout<<up1->area()<<endl;
   cout<<up2->area()<<endl;
   cout<<up1.use_count()<<endl;
   cout<<up2.use_count()<<endl;
    //P2=p1;
    Rectange p(10,6);
    Rectange *p1=&p;
    Rectange *p2=move(p1);
    cout<<p1->area()<<endl;
    cout<<p2->area()<<endl;

  

    

    return 0;
}
