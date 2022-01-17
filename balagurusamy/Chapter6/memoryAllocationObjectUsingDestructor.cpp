//Example 6.8 Memory Allocation to an object using destructor

#include<iostream>
using namespace std;

class test
{
    int *a;
    public:
    test(int size)
    {
        a=new int[size];
        cout<<"Constructor msg: integer array of size "<<size<<" created ";
    }
    ~test()
    {
        delete a;
        cout<<"destructor msg: freed up the memory allocated ";
    }
};

int main(){
    int s;
    cout<<"Enter the size of the array...";
    cin>>s;
    cout<<"creating an object of test class"<<endl;
    test T(s);
    cout<<"Press any key to end the program"<<endl;

    //return 0;
    exit(0);
}

/*
Output= return 0;
Enter the size of the array...5
creating an object of test class
Constructor msg: integer array of size 5 created Press any key to end the program
destructor msg: freed up the memory allocated

exit(0)
nter the size of the array...5
creating an object of test class
Constructor msg: integer array of size 5 created Press any key to end the program

*/
