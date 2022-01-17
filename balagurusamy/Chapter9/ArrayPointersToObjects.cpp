//Example 9.9 Array of Pointers to Objects
#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

class city
{
    protected:
    char *name;
    int len;
    public:
    city()
    {
        len=0;
        name=new char[len+1];
    }
    void getname(void)
    {
        char *s;
        s=new char[30];
        cout<<"Enter city name: ";
        cin>>s;
        len=strlen(s);
        name=new char[len+1];
        strcpy(name,s);
    }
    void printname(void)
    {
        cout<<name<<endl;
    }
};
int main()
{
    city *cptr[10];
    int n=1;
    int option;
    do
    {
        cptr[n]=new city;
        cptr[n]->getname();
        n++;
        cout<<"Do you want to enter one more name?"<<endl;
        cout<<"Enter 1 for yes 0 for no :";
        cin>>option;
    }
    while(option);
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cptr[i]->printname();
    }
    return 0;
}

/*
Output=
Enter city name: Hyderabad
Do you want to enter one more name?
Enter 1 for yes 0 for no :1
Enter city name: Secunderabad
Do you want to enter one more name?
Enter 1 for yes 0 for no :1
Enter city name: Agra
Do you want to enter one more name?
Enter 1 for yes 0 for no :0

Hyderabad
Secunderabad
Agra

*/