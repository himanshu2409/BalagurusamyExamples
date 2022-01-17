//Example 7.5 Overloading of the Subscript Operator
#include<iostream>
using namespace std;

class arr
{
    int a[5];
    public:
    arr(int *s)
    {
        for(int i=0;i<5;i++)
            a[i]=s[i];
    }
    int operator [] (int k)
    {
        return (a[k]);
    }
};

int main()
{
    int x[5]={1,2,3,4,5};
    arr A(x);
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<"\t"; //using subscript operator to access the private array elements
    }
    return 0;
}

/*
Output=
1       2       3       4       5
*/
