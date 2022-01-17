//Example 9.4 Pointers with Arrays
#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,99,4,37,88,3,19,45,62,87};
    int *ptr,num;
    ptr=arr;
    cout<<"Enter the elements to be searched: ";
    cin>>num;
    for(int i=0;i<10;i++)
    {
        if(*ptr==num)
        {
            cout<<"\n"<<num<<" is present in the array";
            break;
        }
        else if(i==9)
        cout<<"\n"<<num<<" is not present in the array";
        ptr++;
    }
    return 0;
}

/*

Output=
Enter the elements to be searched: 87

87 is present in the array

Enter the elements to be searched: 10

10 is not present in the array

*/