//Example 9.14 Pure Virtual Function
#include<iostream>
using namespace std;
class abc
{
    public:
    virtual void example()=0;
};
class C: public abc
{
    public:
    void example()
    {
        cout<<"C text book written by Himanshu"<<endl;
    }
};
class oops: public abc
{
    public:
    void example()
    {
        cout<<"C text book written by Kaushal"<<endl;
    }
};
int main()
{
    abc* arra[2];
    C e1;
    oops e2;
    arra[0]=&e1;
    arra[1]=&e2;

    arra[0]->example();
    arra[1]->example();
    return 0;
}

/*
Output=
C text book written by Himanshu
C text book written by Kaushal
*/