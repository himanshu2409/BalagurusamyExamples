//Example 9.1 Example of Using Pointers
#include<iostream>
using namespace std;

int main()
{
    int a,*ptr1,**ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    cout<<"The address of a: "<<ptr1<<endl;
    cout<<"The address of ptr1: "<<ptr2<<endl;
    cout<<"After incrementing the address values:"<<endl;
    ptr1+=2;
    cout<<"The address of a: "<<ptr1<<endl;
    ptr2+=2;
    cout<<"The address of ptr1: "<<ptr2<<endl;
    return 0;
}

/*
output=
The address of a: 0x61ff08
The address of ptr1: 0x61ff04
After incrementing the address values:
The address of a: 0x61ff10
The address of ptr1: 0x61ff0c

*/
