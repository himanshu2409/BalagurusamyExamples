//Example 5.4 Static Class Member

#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;
    public: 
    void getData(int a)
    {
        number=a;
        count++;
    }

    void getCount(void)
    {
        cout<<"count : ";
        cout<<count<<endl;
    }
};

int item::count;
int main()
{
    item a,b,c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300); 

    cout<<"After reading data :"<<endl;

    a.getCount();
    b.getCount();
    c.getCount();

    return 0;
}

/*
  Output:
    count : 0
    count : 0
    count : 0
    After reading data :
    count : 3
    count : 3
    count : 3
*/