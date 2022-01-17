//Example 6.7 Implementation of destructors

#include<iostream>
using namespace std;

int count1=0;
class alpha
{
    public:
    alpha()
    {
        count1++;
        cout<<"No. of objects created "<<count1<<endl;
    }
    ~alpha()
    {
        cout<<"No. of objects destroyed "<<count1<<endl;
        count1--;
    }
};
int main()
{
    cout<<"Enter main()"<<endl;
    alpha a1,a2,a3,a4;
    {
        cout<<"Enter Block1"<<endl;
        alpha a5;
    }
    {
        cout<<"Enter Block2"<<endl;
        alpha a6;
    }
    cout<<"\n Re-enter main()"<<endl;
    return 0;
}

/*
Output=
Enter main()
No. of objects created 1
No. of objects created 2
No. of objects created 3
No. of objects created 4
Enter Block1
No. of objects created 5
No. of objects destroyed 5
Enter Block2
No. of objects created 5
No. of objects destroyed 5

 Re-enter main()
No. of objects destroyed 4
No. of objects destroyed 3
No. of objects destroyed 2
No. of objects destroyed 1

*/