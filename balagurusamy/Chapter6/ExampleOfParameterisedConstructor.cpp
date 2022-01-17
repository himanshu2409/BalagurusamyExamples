//Example 6.1 Parameterised Constructor

#include<iostream>
using namespace std;

class Point
{
    int x,y;
    public:
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
int main()
{
    Point p1(1,1);
    Point p2(5,10);
    cout<<"Point P1 = ";
    p1.display();
    cout<<"Point P2= ";
    p2.display();
    return 0;
}

/*
Output=
Point P1 = (1,1)
Point P2= (5,10)
*/