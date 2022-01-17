// Example 5.10 Swapping Private Data of classes

#include<iostream>
using namespace std;

class abc;
class xyz
{
    int value1;
    public:
    void indata(int a){ value1=a; }
    void display(void)
    {
        cout<<value1<<endl;
    }
    friend void exchange(abc &,xyz &);
};
class abc
{
    int value2;
    public:
    void indata(int a){ value2=a; }
    void display(void)
    {
        cout<<value2<<endl;
    }
    friend void exchange(abc &,xyz &);
};
void exchange(abc &p,xyz &q)
{
    int temp=p.value2;
    p.value2=q.value1;
    q.value1=temp;
}

int main()
{
    abc m;
    xyz n;
    m.indata(100);
    n.indata(200);

    cout<<"Values before exhange "<<endl;

    m.display();
    n.display();
    exchange(m,n);

    cout<<"Values after exhange "<<endl;

    m.display();
    n.display();
    return 0;
}

/*
Output= 
Values before exhange 
100
200
Values after exhange
200
100

*/