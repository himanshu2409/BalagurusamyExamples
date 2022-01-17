//Example 9.12 Virtual Functions

#include<iostream>
using namespace std;

class Base
{
    public: 
    void display()
    {
        cout<<"Display base "<<endl;
    }
    virtual void show()
    {
        cout<<"\n show base"<<endl;
    }
};
class Derived: public Base
{
    public:
    void display()
    {
        cout<<"Display derived "<<endl;
    }
    virtual void show()
    {
        cout<<"\n show derived"<<endl;
    }
};
int main()
{
    Base B;
    Derived D;
    Base *bptr;
    cout<<"\n bptr points to Base"<<endl;
    bptr=&B;
    bptr->display();
    bptr->show();
    cout<<"\n bptr points to Derived"<<endl;
    bptr=&D;
    bptr->display();
    bptr->show();
    return 0;
}
/*
Output=
bptr points to Base
Display base 
show base
bptr points to Derived
Display base 
show derived

*/