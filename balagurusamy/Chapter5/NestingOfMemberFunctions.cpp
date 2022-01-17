//Program 5.2 Nesting of Member Functions

#include<iostream>
#include<cstring>
using namespace std;

class binary
{
    string s;
    public:
    void read(void)
    {
        cout<<"Enter a binary number:";
        cin>>s;
    }
    void chk_bin(void)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='0' && s[i]!='1')
            {
                cout<<"Incorrect binary Number format"<<endl;
                exit(0);
            }
        }
    }
    void ones(void)
    {
        chk_bin();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                s[i]='1';
            else
                s[i]='0';
        }
    }
    void displayones(void)
    {
        ones();
        cout<<"1's compliment of above binary number "<<s<<endl;
    }
};
int main()
{
    binary b;
    b.read();
    b.displayones();
    return 0;
}


/*
Output: 
count : 2
count : 3
object number : 1
object number : 2
object number : 3

*/