//Example 6.2 Overloaded Constructor

#include<iostream>
using namespace std;

class complex
{
    float x,y;
    public:
    complex(){}
    complex(float a)
    {
        x=y=a;
    }
    complex(float real,float imag)
    {
        x=real;
        y=imag;
    }
    friend complex sum(complex,complex);
    friend void show(complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}
void show(complex c)
{
    cout<<c.x<<" +j "<<c.y<<endl;
}
int main()
{
    complex A(2.7,3.5);
    complex B(1.6);
    complex C;
    C=sum(A,B);
    cout<<"A= "; show(A);
    cout<<"B= "; show(B);
    cout<<"C= "; show(C);
    
    complex p,q,r;
    p=complex(2.5,3.9);
    q=complex(1.6,2.5);
    r=sum(p,q);
    cout<<endl;
    cout<<"P = "; show(p);
    cout<<"Q = "; show(q);
    cout<<"R = "; show(r);
    return 0;
}

/*
Output=
A= 2.7 +j 3.5
B= 1.6 +j 1.6
C= 4.3 +j 5.1

P = 2.5 +j 3.9
Q = 1.6 +j 2.5
R = 4.1 +j 6.4
*/