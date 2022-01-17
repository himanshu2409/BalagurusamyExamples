//Example 8.8 Initialisation List in Constructors
#include<iostream>
using namespace std;

class alpha
{
    int x;
    public:
    alpha(int i)
    {
        x=i;
        cout<<"Alpha initialised"<<endl;
    }
    void show_alpha(void)
    {
        cout<<"x= "<<x<<endl;
    }
};

class beta
{
    float p,q;
    public:
    beta(float a,float b):p(a),q(b+p)
    {
        cout<<"beta initialised"<<endl;
    }
    void show_beta(void)
    {
        cout<<"p= "<<p<<endl;
        cout<<"q= "<<q<<endl;
    }
};
class gamma:public beta,public alpha
{
    int u,v;
    public:
    gamma(int a,int b,float c): alpha(a*2),beta(c,c),u(a)
    {
        v=b;
        cout<<"gamma initialised"<<endl;
    }
    void show_gamma(void)
    {
        cout<<"u= "<<u<<endl;
        cout<<"v= "<<v<<endl;
    }
};
int main()
{
    gamma g(2,4,2.5);
    cout<<endl;
    g.show_alpha();
    g.show_beta();
    g.show_gamma();

    return 0;
}
/*
Output=
beta initialised
Alpha initialised
gamma initialised

x= 4
p= 2.5
q= 5
u= 2
v= 4

*/