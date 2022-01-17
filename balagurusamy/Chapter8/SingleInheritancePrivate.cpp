//Example 8.2 Single Inheritance : Private
#include<iostream>
using namespace std;

class B
{
    int a;
    public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};
class D:private B
{
    int c;
    public:
    void mul(void);
    void display(void);
};

void B:: get_ab(void)
{
    cout<<"Enter values for a and b: ";
    cin>>a>>b;
}
int B::get_a()
{
    return a;
}
void B::show_a()
{
    cout<<"a = "<<a<<endl;
}
void D::mul()
{
    get_ab();
    c=b*get_a();
}
void D::display()
{
    show_a();
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;
}
int main()
{
    D d;
    //d.get_ab();
    d.mul();
    //d.show_a();
    d.display();
    //d.b=20;
    d.mul();
    d.display();

    return 0;
}

/*
Output=
Enter values for a and b: 5 10
a = 5
b= 10
c= 50
Enter values for a and b: 12 20
a = 12
b= 20
c= 240

*/