//Example 7.6 Overloading of Pointer to Member Operator

#include<iostream>
using namespace std;

class test
{
    public:
    int num;
    test(int j)
    {
        num=j;
    }
    test *operator->(void)
    {
        return this;
    }
};

int main()
{
    test t(5);
    test *ptr=&t;
    cout<<"t.num = "<<t.num<<endl;
    cout<<"\n ptr->num = "<<ptr->num<<endl;

    cout<<"t->num = "<<t->num<<endl;

    return 0;
}

/*
Output=
t.num = 5
ptr->num = 5
t->num = 5
*/