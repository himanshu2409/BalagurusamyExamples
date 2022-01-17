//Example 7.1 Overloading Unary Minus
#include<iostream>
using namespace std;

class space
{
    int x,y,z;
    public:
    void getdata(int a,int b,int c);
    void display(void);
    void operator-();  //overload unary minus
};
void space::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void space::display(void)
{
    cout<<x<<" ";
    cout<<y<<" ";
    cout<<z<<" "<<endl;
}
void space::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    space p;
    p.getdata(10,-20,30);
    cout<<"Before P: ";
    p.display();
    -p;     //acivates operator-() function
    cout<<"After P: ";
    p.display();

    return 0;
}

/*
Output=
Before P: 10 -20 30 
After P: -10 20 -30
*/