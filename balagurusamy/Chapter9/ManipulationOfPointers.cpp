//Example 9.2 Manipulation Of Pointers
#include<iostream>
using namespace std;
int main()
{
    int a=10,*ptr;
    ptr=&a;
    cout<<"The value of a is :"<<a<<endl;
    *ptr=(*ptr)/2;
    cout<<"The value of a is :"<<(*ptr)<<endl;
    return 0;
}

/*
Output=
The value of a is :10
The value of a is :5

*/