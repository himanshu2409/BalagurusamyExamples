//Example 9.8 Pointers To Objects
#include<iostream>
using namespace std;

class item
{
    int code;
    float price;
    public:
    void getdata(int a,float b)
    {
        code=a;
        price=b;
    }
    void show(void)
    {
        cout<<"Code : "<<code<<endl;
        cout<<"Price : "<<price<<endl;
    }
};
const int size1=2;
int main()
{
    item *p=new item[size1];
    item *d=p;
    int x,i;
    float y;
    for(i=0;i<size1;i++)
    {
        cout<<"Input code and price for item "<<i+1<<endl;
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    }
    for(i=0;i<size1;i++)
    {
        cout<<"Item : "<<i+1<<endl;
        d->show();
        d++;
    }
    return 0;
}
/*
Output=
Input code and price for item 1
40 500
Input code and price for item 2
50 600
Item : 1
Code : 40
Price : 500
Item : 2
Code : 50
Price : 600
*/