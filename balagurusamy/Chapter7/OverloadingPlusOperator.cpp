//Example 7.2 Overloading + Operator

#include<iostream>
using namespace std;

class complex1
{
    float x,y;
    public:
    complex1(){}
    complex1(float real,float imag)
    {
        x=real;
        y=imag;
    }
    complex1 operator+(complex1);
    void display(void);
};

complex1 complex1::operator+(complex1 c)
{
    complex1 temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return (temp);
}
void complex1::display(void)
{
    cout<<x<<"+j"<<y<<endl;
}
int main()
{
    complex1 c1,c2,c3;
    c1=complex1(2.5,3.5);
    c2=complex1(1.6,2.7);
    c3=c1+c2;
    cout<<"c1= "; c1.display();
    cout<<"c2= "; c2.display();
    cout<<"c3= "; c3.display();

    return 0;
}

/*
Output=
c1= 2.5+j3.5
c2=1.6+j2.7
c3= 4.1+j6.2

*/