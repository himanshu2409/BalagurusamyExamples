//  Uses of object of Array
//Example 5.6 Array Of Objects

#include<iostream>
using namespace std;

class employee
{
    char name[30];
    float age;
    public:
    void getdata(void);
    void putdata(void);
};

void employee::getdata(void)
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age :";
    cin>>age;
}
void employee::putdata(void)
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}
const int num=3;

int main()
{
    employee manager[num];
    for(int i=0;i<num;i++)
    {
        cout<<"\n Details of manager "<<i+1<<endl;
        manager[i].getdata();
    }
    cout<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<"\n Manager "<<i+1<<endl;
        manager[i].putdata();
    }
    return 0;
}

/*
Output:
    Details of manager 1
    Enter name: Himanshu
    Enter age :25

    Details of manager 2
    Enter name: Mitanshu
    Enter age :28

    Details of manager 3
    Enter name: Anupam
    Enter age :51


    Manager 1
    Name : Himanshu
    Age : 25

    Manager 2
    Name : Mitanshu
    Age : 28

    Manager 3
    Name : Anupam
    Age : 51

*/