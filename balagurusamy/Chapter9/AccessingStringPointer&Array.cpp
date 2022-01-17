//Example 9.6 How to reverse a string using pointer and arrays
//Accessing strings using pointers and arrays
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[]="Test";
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        cout<<str[i]<<i[str]<<*(str+i)<<*(i+str);
    }
    cout<<endl;
    int lenM=len/2;
    len--;
    for(int i=0;i<lenM;i++)
    {
        str[i]=str[i]+str[len-i];
        str[len-i]=str[i]-str[len-i];
        str[i]=str[i]-str[len-i];
    }
    cout<<"The string reversed : "<<str;
    return 0;
}

/*
Output=
TTTTeeeesssstttt
The string reversed : tseT
*/