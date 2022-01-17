//Example 9.7 Pointers To Functions
#include<iostream>
using namespace std;

typedef void (*funPtr)(int,int);

void Add(int i,int j)
{
    cout<<i<<"+"<<j<<"="<<i+j<<endl;
}
void Subtract(int i,int j)
{
    cout<<i<<"-"<<j<<"="<<i-j<<endl;
}
int main()
{
    funPtr ptr;
    ptr=&Add;
    ptr(1,2);
    cout<<endl;
    ptr=&Subtract;
    ptr(3,2);
    return 0;
}
/*
Output=
1+2=3

3-2=1

*/